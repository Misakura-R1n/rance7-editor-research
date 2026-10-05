# -*- coding: utf-8 -*-
"""Export descriptor-backed MFC maps and their unique handler addresses."""
import argparse
import hashlib
import json
from pathlib import Path

import pefile
from mfc_maps import find_message_maps, entry_kind, MESSAGE_NAMES


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("exe", type=Path, help="Local PE32 x86 sample (read only)")
    parser.add_argument("--output", type=Path,
                        default=Path(__file__).resolve().parents[1] / "generated" / "analysis" / "msgmap_handlers.txt")
    args = parser.parse_args()
    pe = pefile.PE(str(args.exe), fast_load=True)
    try:
        maps = find_message_maps(pe)
    finally:
        pe.close()
    lines = [f"descriptor-backed maps: {len(maps)}; entries: {sum(len(m['entries']) for m in maps)}",
             "entry layout: nMessage, nCode, nID, nLastID, nSig, pfn (24 bytes)"]
    for message_map in maps:
        lines.append(f"=== MAP 0x{message_map['descriptor']:08X} entries@0x{message_map['table']:08X} ===")
        for entry in message_map["entries"]:
            message = MESSAGE_NAMES.get(entry["message"], f"MSG_0x{entry['message']:04X}")
            lines.append(f"rdata@0x{entry['address']:08X} cmdID={entry['first_id']:6d}..{entry['last_id']:6d} "
                         f"{message:20s} {entry_kind(entry):26s} sig={entry['signature']:3d} "
                         f"handler=0x{entry['handler']:08X} code=0x{entry['code']:08X}")
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text("\n".join(lines) + "\n", encoding="utf-8", newline="\n")
    document = {"schema": 1, "sample_sha256": hashlib.sha256(args.exe.read_bytes()).hexdigest(), "maps": maps}
    args.output.with_suffix(".json").write_text(json.dumps(document, indent=2) + "\n", encoding="utf-8")
    addresses = sorted({entry["handler"] for m in maps for entry in m["entries"]})
    (args.output.parent / "handler_addrs.txt").write_text("".join(f"0x{address:08X}\n" for address in addresses), encoding="utf-8")
    print(f"maps={len(maps)} entries={sum(len(m['entries']) for m in maps)} unique_handlers={len(addresses)}")


if __name__ == "__main__":
    main()
