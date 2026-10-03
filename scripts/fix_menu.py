# -*- coding: utf-8 -*-
"""Correctly parse RT_MENU (MENUTEMPLATE) resources -> menu.txt"""
import pefile
import struct
import argparse
from pathlib import Path

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument("exe", type=Path, help="Path to a locally supplied Rance7Editor.exe (read only)")
parser.add_argument("--output", type=Path,
                    default=Path(__file__).resolve().parents[1] / "generated" / "resources" / "menus.txt")
args = parser.parse_args()
EXE = args.exe
OUT = args.output
OUT.parent.mkdir(parents=True, exist_ok=True)
pe = pefile.PE(EXE, fast_load=False)
pe.parse_data_directories()


def w(d, o): return struct.unpack_from("<H", d, o)[0]


def parse(d):
    lines = []
    # header: WORD version, WORD offset
    o = 4

    def walk(o, depth):
        while o + 2 <= len(d):
            opt = w(d, o)
            o += 2
            if opt & 0x0800:  # MF_SEPARATOR
                lines.append("  " * depth + "--------")
                continue
            if opt & 0x0010:  # MF_POPUP
                e = o
                while e + 2 <= len(d) and w(d, e):
                    e += 2
                s = d[o:e].decode("utf-16-le", errors="replace")
                o = e + 2
                lines.append("  " * depth + f"POPUP {s!r}")
                o = walk(o, depth + 1)
            else:
                mid = w(d, o)
                o += 2
                e = o
                while e + 2 <= len(d) and w(d, e):
                    e += 2
                s = d[o:e].decode("utf-16-le", errors="replace")
                o = e + 2
                lines.append("  " * depth + f"[{mid}] {s!r}")
        return o

    walk(o, 0)
    return "\n".join(lines)


out = []
for rtype in pe.DIRECTORY_ENTRY_RESOURCE.entries:
    if rtype.struct.Id != 4:
        continue
    for rid in rtype.directory.entries:
        for lang in rid.directory.entries:
            d = pe.get_data(lang.data.struct.OffsetToData, lang.data.struct.Size)
            out.append(f"=== MENU id={rid.struct.Id} ===\n" + parse(d))
open(OUT, "w", encoding="utf-8").write("\n\n".join(out))
print("done")
