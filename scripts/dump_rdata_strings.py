# -*- coding: utf-8 -*-
"""Extract NUL-terminated GBK strings from data sections of Rance7Editor.exe."""
import pefile
import re
import argparse
from pathlib import Path

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument("exe", type=Path, help="Path to a locally supplied Rance7Editor.exe (read only)")
parser.add_argument("--output", type=Path,
                    default=Path(__file__).resolve().parents[1] / "generated" / "analysis" / "rdata_strings.txt")
args = parser.parse_args()
EXE = args.exe
OUT = args.output
OUT.parent.mkdir(parents=True, exist_ok=True)

pe = pefile.PE(EXE, fast_load=True)
lines = []
for sec in pe.sections:
    name = sec.Name.decode(errors="replace").rstrip("\x00")
    if name not in (".rdata", ".data"):
        continue
    data = sec.get_data()
    base = pe.OPTIONAL_HEADER.ImageBase + sec.VirtualAddress
    lines.append(f"===== section {name} @ VA 0x{base:08X} size 0x{len(data):X} =====")
    for m in re.finditer(rb"([^\x00]{3,})\x00", data):
        b = m.group(1)
        try:
            s = b.decode("gbk")
        except Exception:
            try:
                s = b.decode("utf-8")
            except Exception:
                continue
        # require mostly-printable
        if sum(32 <= ord(c) < 127 or 0x4E00 <= ord(c) <= 0x9FFF or c in "，。！？：（）、“”" for c in s) < len(s) * 0.85:
            continue
        if len(s) < 3:
            continue
        lines.append(f"0x{base + m.start():08X}  {s}")

open(OUT, "w", encoding="utf-8").write("\n".join(lines))
print(f"{len(lines)} lines -> {OUT}")
