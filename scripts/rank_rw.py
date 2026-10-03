# -*- coding: utf-8 -*-
"""Rank static ReadProcessMemory/WriteProcessMemory references in the decompiler export."""
import re
import argparse
from pathlib import Path

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument("input", nargs="?", type=Path,
                    default=Path(__file__).resolve().parents[1] / "decompiled" / "all_functions.c")
args = parser.parse_args()
src = args.input.read_text(encoding="utf-8")
funcs = re.split(r"//==================== ", src)
rows = []
for f in funcs:
    m = re.match(r"([^@]+) @ 0x([0-9A-F]+) \(size (\d+)\)", f)
    if not m:
        continue
    a = int(m.group(2), 16)
    if not (0x401000 <= a <= 0x41A000):
        continue
    r = f.count("ReadProcessMemory")
    w = f.count("WriteProcessMemory")
    if r or w:
        rows.append((a, m.group(1).strip(), int(m.group(3)), r, w))
rows.sort(key=lambda x: -(x[3] + x[4]))
for a, n, s, r, w in rows[:30]:
    print(f"0x{a:08X} {n} size={s} reads={r} writes={w}")
