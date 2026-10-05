# -*- coding: utf-8 -*-
"""Dump PE dialog, menu, string-table, version and manifest resources."""
import argparse
from pathlib import Path

import pefile
from pe_resources import parse_dialog, parse_menu, parse_stringtable, render_dialog, render_menu, resource_entries


def dump_resources(exe, output_dir):
    pe = pefile.PE(str(exe), fast_load=False)
    try:
        dialogs, menus, strings, misc = [], [], [], []
        for name, language, data in resource_entries(pe, 5):
            dialogs.append(render_dialog(parse_dialog(data), f"{name} lang=0x{language:04X}", len(data)))
        for name, language, data in resource_entries(pe, 4):
            menus.append(f"=== MENU id={name} lang=0x{language:04X} ===\n" + "\n".join(render_menu(parse_menu(data))))
        string_count = 0
        for name, language, data in resource_entries(pe, 6):
            block = parse_stringtable(data)
            base = (int(name) - 1) * 16
            strings.append(f"--- STRINGTABLE base={base} lang=0x{language:04X} ---")
            for index, text in enumerate(block):
                if text:
                    strings.append(f"  [{base + index}] {text}")
                    string_count += 1
        for file_info in getattr(pe, "FileInfo", []):
            for info in file_info:
                if info.Key == b"StringFileInfo":
                    for table in info.StringTable:
                        misc.append("--- VERSION INFO ---")
                        # pefile returns UTF-8 encoded version strings.
                        misc.extend(f"  {key.decode('utf-8')}: {value.decode('utf-8')}"
                                    for key, value in table.entries.items())
        for name, language, data in resource_entries(pe, 24):
            misc.append(f"--- MANIFEST {name} lang=0x{language:04X} ---\n" + data.decode("utf-8-sig"))
        output_dir.mkdir(parents=True, exist_ok=True)
        for name, text in (("dialogs.txt", "\n\n".join(dialogs)), ("menus.txt", "\n\n".join(menus)),
                           ("stringtables.txt", "\n".join(strings)), ("misc.txt", "\n".join(misc))):
            (output_dir / name).write_text(text + "\n", encoding="utf-8", newline="\n")
        print(f"dialogs={len(dialogs)} strings={string_count} menus={len(menus)}")
    finally:
        pe.close()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("exe", type=Path, help="Local PE sample (read only)")
    parser.add_argument("--output-dir", type=Path,
                        default=Path(__file__).resolve().parents[1] / "generated" / "resources")
    args = parser.parse_args()
    dump_resources(args.exe, args.output_dir)


if __name__ == "__main__":
    main()
