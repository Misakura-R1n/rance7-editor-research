"""Verify archived research artifacts against a local, never-executed PE sample."""
import argparse
import csv
import hashlib
import json
import os
import re
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

import capstone
import pefile
from pe_resources import resource_entries, parse_menu, parse_stringtable, menu_labels

SAMPLE_SHA256 = "bd5d6330da4a27bba88a7754466a53d9fa0b530b8f7e978660d2f3c15255557d"


def require(condition, message):
    if not condition:
        raise ValueError(message)


def check_windows_resources(pe, sample):
    import ctypes
    user32 = ctypes.WinDLL("user32", use_last_error=True)
    kernel32 = ctypes.WinDLL("kernel32", use_last_error=True)
    user32.LoadMenuIndirectW.argtypes = [ctypes.c_void_p]
    user32.LoadMenuIndirectW.restype = ctypes.c_void_p
    user32.GetMenuItemCount.argtypes = [ctypes.c_void_p]
    user32.GetMenuItemCount.restype = ctypes.c_int
    user32.GetSubMenu.argtypes = [ctypes.c_void_p, ctypes.c_int]
    user32.GetSubMenu.restype = ctypes.c_void_p
    user32.GetMenuItemID.argtypes = [ctypes.c_void_p, ctypes.c_int]
    user32.GetMenuItemID.restype = ctypes.c_uint
    user32.GetMenuStringW.argtypes = [ctypes.c_void_p, ctypes.c_uint, ctypes.c_wchar_p, ctypes.c_int, ctypes.c_uint]
    user32.DestroyMenu.argtypes = [ctypes.c_void_p]

    def compare_menu(handle, items):
        require(user32.GetMenuItemCount(handle) == len(items), "Windows menu item count differs")
        for index, item in enumerate(items):
            text = ctypes.create_unicode_buffer(4096)
            user32.GetMenuStringW(handle, index, text, len(text), 0x400)
            require(text.value == item["text"], f"Windows menu text differs: {item}")
            child = user32.GetSubMenu(handle, index)
            if "children" in item:
                require(bool(child), "Windows submenu missing")
                compare_menu(child, item["children"])
            else:
                require(not child and user32.GetMenuItemID(handle, index) == item["id"], "Windows menu ID differs")

    menu_count = 0
    for name, language, data in resource_entries(pe, 4):
        buffer = ctypes.create_string_buffer(data)
        handle = user32.LoadMenuIndirectW(buffer)
        require(bool(handle), f"Windows rejected menu {name}: {ctypes.get_last_error()}")
        try:
            compare_menu(handle, parse_menu(data))
            menu_count += 1
        finally:
            user32.DestroyMenu(handle)

    kernel32.LoadLibraryExW.argtypes = [ctypes.c_wchar_p, ctypes.c_void_p, ctypes.c_uint]
    kernel32.LoadLibraryExW.restype = ctypes.c_void_p
    kernel32.FreeLibrary.argtypes = [ctypes.c_void_p]
    user32.LoadStringW.argtypes = [ctypes.c_void_p, ctypes.c_uint, ctypes.c_wchar_p, ctypes.c_int]
    user32.LoadStringW.restype = ctypes.c_int
    # LOAD_LIBRARY_AS_DATAFILE | LOAD_LIBRARY_AS_IMAGE_RESOURCE: no PE code runs.
    handle = kernel32.LoadLibraryExW(str(sample), None, 0x22)
    require(bool(handle), f"Windows resource loading failed: {ctypes.get_last_error()}")
    strings = 0
    try:
        for block, language, data in resource_entries(pe, 6):
            for index, text in enumerate(parse_stringtable(data)):
                if text:
                    buffer = ctypes.create_unicode_buffer(4096)
                    user32.LoadStringW(handle, (block - 1) * 16 + index, buffer, len(buffer))
                    require(text == buffer.value, f"Windows string ID {(block - 1) * 16 + index} differs")
                    strings += 1
    finally:
        kernel32.FreeLibrary(handle)
    print(f"PASS Windows resources: {menu_count} menu trees, {strings} non-empty string IDs")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("exe", type=Path)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    args = parser.parse_args()
    root, sample = args.root.resolve(), args.exe.resolve()
    sample_hash = hashlib.sha256(sample.read_bytes()).hexdigest()
    require(sample_hash == SAMPLE_SHA256, "sample SHA-256 differs from this research version")
    output_root = root / "generated"
    output_root.mkdir(exist_ok=True)
    with tempfile.TemporaryDirectory(prefix="verify-", dir=output_root) as temporary:
        output = Path(temporary)
        jobs = [("dump_resources.py", str(sample), "--output-dir", str(output / "resources")),
                ("fix_menu.py", str(sample), "--output", str(output / "menus-separate.txt")),
                ("find_msgmaps.py", str(sample), "--output", str(output / "analysis/msgmap_handlers.txt")),
                ("make_cmd_map.py", str(sample), "--input", str(output / "analysis/msgmap_handlers.json"),
                 "--output", str(output / "analysis/cmd_map.txt")),
                ("dump_pe.py", str(sample), "--output-dir", str(output / "analysis")),
                ("dump_rdata_strings.py", str(sample), "--output", str(output / "analysis/rdata_strings.txt"))]
        for script, *arguments in jobs:
            subprocess.run([sys.executable, "-X", "utf8", str(root / "scripts" / script), *arguments],
                           cwd=output, capture_output=True, check=True)
        for directory in ("resources", "analysis"):
            for path in (output / directory).iterdir():
                archive = root / directory / path.name
                require(path.read_text(encoding="utf-8") == archive.read_text(encoding="utf-8"),
                        f"archived result differs: {directory}/{path.name}")
        require((output / "menus-separate.txt").read_bytes() == (output / "resources/menus.txt").read_bytes(),
                "menu exporters disagree")
    print("PASS all Python-generated archives reproduce from sample")

    source = (root / "decompiled/all_functions.c").read_text(encoding="utf-8")
    headers = re.findall(r"//==================== (.*?) @ 0x([0-9A-F]+) \(size (\d+)\)", source)
    with (root / "decompiled/functions.csv").open(encoding="utf-8", newline="") as handle:
        rows = list(csv.reader(handle))
    require(rows[0] == ["entry", "name", "size", "params"] and all(len(row) == 4 for row in rows), "invalid function CSV")
    require(len(headers) == len(rows) - 1 == 3589, "function inventory count differs")
    require([(int(address, 16), name, int(size)) for name, address, size in headers] ==
            [(int(row[0], 16), row[1], int(row[2])) for row in rows[1:]], "CSV and pseudo-C inventory differ")
    addresses = {int(address, 16) for name, address, size in headers}
    document = json.loads((root / "analysis/msgmap_handlers.json").read_text(encoding="utf-8"))
    entries = [entry for message_map in document["maps"] for entry in message_map["entries"]]
    handlers = {entry["handler"] for entry in entries}
    handler_source = (root / "decompiled/handlers.c").read_text(encoding="utf-8")
    exported = [int(a, 16) for a in re.findall(r" @ 0x([0-9A-F]+)", handler_source)]
    require(len(exported) == len(handlers) == 204 and set(exported) == handlers <= addresses, "handler export coverage differs")
    for name, text in (("all_functions.c", source), ("handlers.c", handler_source)):
        require(not re.search(r"DECOMPILE FAILED|DECOMPILE EXCEPTION|// EXCEPTION:|<no function>", text), f"failed export in {name}")
    print(f"PASS Ghidra inventories: {len(headers)} functions; all {len(handlers)} mapped handlers exported")

    pe = pefile.PE(str(sample))
    try:
        require(len(document["maps"]) == 21 and len(entries) == 227, "message-map inventory differs")
        for entry in entries:
            expected = (entry["message"], entry["code"], entry["first_id"], entry["last_id"], entry["signature"], entry["handler"])
            require(struct.unpack("<6I", pe.get_data(entry["address"] - pe.OPTIONAL_HEADER.ImageBase, 24)) == expected,
                    f"message-map bytes differ at 0x{entry['address']:08X}")
        menu_ids = {command for name, language, data in resource_entries(pe, 4)
                    for command in menu_labels(parse_menu(data))}
        command_ids = {command for command in menu_ids for entry in entries
                       if entry["message"] == 0x111 and entry["code"] == 0
                       and entry["first_id"] <= command <= entry["last_id"]}
        require(len(menu_ids) == 79 and command_ids == menu_ids, "menu command handler coverage differs")
        print(f"PASS all {len(menu_ids)} menu command IDs have command handlers")
        view = next(m for m in document["maps"] if m["table"] == 0x46C0A8)
        money = {(e["code"], e["handler"]) for e in view["entries"] if e["first_id"] == 32848}
        require(money == {(0, 0x416A90), (0xFFFFFFFF, 0x417860)}, "money command/update association differs")
        md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
        resolver = [(i.mnemonic, i.op_str) for i in md.disasm(pe.get_data(0x408C70 - 0x400000, 98), 0x408C70)]
        require(resolver.count(("call", "edi")) == 3 and ("add", "edx, 0x64d48") in resolver
                and ("add", "edx, 0x14") in resolver, "resolver no longer performs three pointer reads")
        require(any(symbol.address == 0x461354 and symbol.name == b"ReadProcessMemory"
                    for dll in pe.DIRECTORY_ENTRY_IMPORT for symbol in dll.imports), "resolver import differs")
        vm_name = "SYS42VM.DLL\0".encode("utf-16-le")
        require(pe.get_data(0x46B044 - 0x400000, len(vm_name)) == vm_name, "VM module name differs")
        lookup = {i.address: (i.mnemonic, i.op_str)
                  for i in md.disasm(pe.get_data(0x408A90 - 0x400000, 466), 0x408A90)}
        # MODULEENTRY32W begins at ESP+0x14; its x86 modBaseAddr is at +0x14.
        require(lookup[0x408B93] == ("mov", "ecx, 0x46b044")
                and lookup[0x408C24] == ("mov", "esi, dword ptr [esp + 0x28]")
                and lookup[0x408C51] == ("mov", "eax, esi"), "VM base lookup differs")
        # Exhausting the module list instead returns the snapshot handle, a sample defect.
        require(lookup[0x408C0E] == ("mov", "esi, dword ptr [esp + 0x10]")
                and lookup[0x408C17] == ("call", "dword ptr [0x461360]")
                and lookup[0x408C1D] == ("mov", "eax, esi"), "module lookup failure path differs")
        if os.name == "nt":
            check_windows_resources(pe, sample)
        else:
            print("SKIP Windows API resource comparison: requires Windows")
    finally:
        pe.close()
    require(hashlib.sha256(sample.read_bytes()).hexdigest() == sample_hash, "sample changed during verification")
    print("PASS sample SHA-256 unchanged; message maps, resolver and VM lookup agree with machine code")


if __name__ == "__main__":
    main()
