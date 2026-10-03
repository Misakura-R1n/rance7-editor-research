# -*- coding: utf-8 -*-
"""Parse MFC AFX_MSGMAP_ENTRY tables found in .rdata of Rance7Editor.exe.
Empirical entry layout (24 bytes): nID, nLastID, nSig, pfn, nMessage, nCode
"""
import pefile
import struct
import argparse
from pathlib import Path

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument("exe", type=Path, help="Path to a locally supplied Rance7Editor.exe (read only)")
parser.add_argument("--output", type=Path,
                    default=Path(__file__).resolve().parents[1] / "generated" / "analysis" / "msgmap_handlers.txt")
args = parser.parse_args()
EXE = args.exe
OUT = args.output
OUT.parent.mkdir(parents=True, exist_ok=True)

pe = pefile.PE(EXE, fast_load=True)
ib = pe.OPTIONAL_HEADER.ImageBase
for s in pe.sections:
    if s.Name.decode(errors="replace").rstrip("\x00") == ".rdata":
        data = s.get_data()
        base = ib + s.VirtualAddress

MSG_NAME = {0x111: "WM_COMMAND", 0x113: "WM_TIMER", 0x4E: "WM_NOTIFY", 0xFFFF: "CN_UPDATE_UI",
            0x202: "WM_LBUTTONUP", 0x201: "WM_LBUTTONDOWN", 0x100: "WM_KEYDOWN", 0x0F: "WM_PAINT",
            0x118: "WM_INITMENUPOPUP", 0x231: "WM_ENTERSIZEMOVE"}
CODE_NAME = {0: "ON_COMMAND", 0xFFFFFFFF: "ON_UPDATE_COMMAND_UI", 0xFFFFFFFFFFFFFFFF: "?"}

def valid_pfn(v):
    return 0x401000 <= v < 0x470000

entries = []
for off in range(0, len(data) - 24, 4):
    nid, nlast, sig, pfn, msg, code = struct.unpack_from("<6I", data, off)
    if msg in (0x111, 0x113, 0x4E, 0x118, 0x100, 0x201, 0x202, 0x231) and valid_pfn(pfn) and sig < 0x100:
        if nid < 0x10000 and (nid <= nlast or nlast == 0):
            entries.append((off, nid, nlast, sig, pfn, msg, code))

# merge duplicates from overlapping windows
uniq = {}
for off, nid, nlast, sig, pfn, msg, code in entries:
    uniq[(nid, nlast, sig, pfn, msg, code)] = off

lines = [f"total candidate entries: {len(uniq)}"]
for (nid, nlast, sig, pfn, msg, code), off in sorted(uniq.items(), key=lambda kv: kv[1]):
    mname = MSG_NAME.get(msg, hex(msg))
    cname = ""
    if msg == 0x111:
        cname = CODE_NAME.get(code, hex(code))
    lines.append(f"rdata@0x{base+off:08X}  cmdID={nid:6d}..{nlast:6d} {mname:18s} {cname:22s} sig={sig:3d} handler=0x{pfn:08X}")

open(OUT, "w", encoding="utf-8").write("\n".join(lines))
print(f"{len(uniq)} entries -> {OUT}")
