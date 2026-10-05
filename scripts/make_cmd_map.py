# -*- coding: utf-8 -*-
"""Join MFC command entries with command labels extracted from PE menus."""
import argparse
import hashlib
import json
from pathlib import Path

import pefile
from pe_resources import parse_menu, menu_labels, resource_entries


def main():
    root = Path(__file__).resolve().parents[1]
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("exe", type=Path, help="Local PE32 x86 sample (read only)")
    parser.add_argument("--input", type=Path, default=root / "analysis" / "msgmap_handlers.json")
    parser.add_argument("--output", type=Path, default=root / "generated" / "analysis" / "cmd_map.txt")
    args = parser.parse_args()
    document = json.loads(args.input.read_text(encoding="utf-8"))
    if document.get("schema") != 1:
        raise ValueError("unsupported message-map schema")
    if document.get("sample_sha256") != hashlib.sha256(args.exe.read_bytes()).hexdigest():
        raise ValueError("message-map data and PE sample have different SHA-256 hashes")
    pe = pefile.PE(str(args.exe))
    labels = {}
    try:
        for name, language, data in resource_entries(pe, 4):
            for command, paths in menu_labels(parse_menu(data)).items():
                labels.setdefault(command, []).extend(f"MENU {name}: {path}" for path in paths)
    finally:
        pe.close()
    rows = []
    for message_map in document["maps"]:
        for entry in message_map["entries"]:
            if entry["message"] != 0x111 or entry["code"] not in (0, 0xFFFFFFFF):
                continue
            for command in sorted(labels):
                if entry["first_id"] <= command <= entry["last_id"]:
                    rows.append((command, entry["handler"], message_map["table"], entry["code"],
                                 "ON_COMMAND" if entry["code"] == 0 else "ON_UPDATE_COMMAND_UI",
                                 " | ".join(labels[command])))
    lines = ["cmdID   handler      map_entries  code         类型                       菜单资源路径",
             "-" * 110]
    for command, handler, table, code, kind, label in sorted(rows):
        lines.append(f"{command:6d} 0x{handler:08X} 0x{table:08X} 0x{code:08X} {kind:26s} {label}")
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text("\n".join(lines) + "\n", encoding="utf-8", newline="\n")
    print(f"command_entries={len(rows)} menu_command_ids={len(labels)}")


if __name__ == "__main__":
    main()
