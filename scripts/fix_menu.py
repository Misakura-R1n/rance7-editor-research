# -*- coding: utf-8 -*-
"""Export classic RT_MENU resources using the same reader as dump_resources.py."""
import argparse
from pathlib import Path

import pefile
from pe_resources import parse_menu, render_menu, resource_entries


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("exe", type=Path, help="Local PE sample (read only)")
    parser.add_argument("--output", type=Path,
                        default=Path(__file__).resolve().parents[1] / "generated" / "resources" / "menus.txt")
    args = parser.parse_args()
    pe = pefile.PE(str(args.exe))
    try:
        menus = [f"=== MENU id={name} lang=0x{language:04X} ===\n" + "\n".join(render_menu(parse_menu(data)))
                 for name, language, data in resource_entries(pe, 4)]
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_text("\n\n".join(menus) + "\n", encoding="utf-8", newline="\n")
    finally:
        pe.close()
    print(f"menus={len(menus)}")


if __name__ == "__main__":
    main()
