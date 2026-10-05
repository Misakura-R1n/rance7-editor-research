"""Export PE imports and aligned UTF-16LE string candidates from data sections."""
import argparse
from pathlib import Path

import pefile


def utf16_candidates(data, base, minimum=4):
    start, characters = None, []
    for offset in range(0, len(data) - 1, 2):
        value = int.from_bytes(data[offset:offset + 2], "little")
        printable = 0x20 <= value <= 0x7E or 0x3000 <= value <= 0x30FF or 0x4E00 <= value <= 0x9FFF
        if printable:
            if start is None:
                start = offset
            characters.append(chr(value))
        else:
            if value == 0 and len(characters) >= minimum:
                yield base + start, "".join(characters)
            start, characters = None, []


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("exe", type=Path, help="Local PE sample (read only)")
    parser.add_argument("--output-dir", type=Path,
                        default=Path(__file__).resolve().parents[1] / "generated" / "analysis")
    args = parser.parse_args()
    pe = pefile.PE(str(args.exe))
    try:
        imports = []
        for dll in getattr(pe, "DIRECTORY_ENTRY_IMPORT", []):
            imports.append(f"=== {dll.dll.decode('ascii')} ===")
            for symbol in dll.imports:
                name = symbol.name.decode("ascii") if symbol.name else f"ordinal:{symbol.ordinal}"
                imports.append(f"0x{symbol.address:08X} {name}")
        strings = ["UTF-16LE string candidates; addresses are preferred-image VAs."]
        for section in pe.sections:
            name = section.Name.rstrip(b"\0").decode("ascii")
            if name not in (".rdata", ".data"):
                continue
            for address, text in utf16_candidates(section.get_data(), pe.OPTIONAL_HEADER.ImageBase + section.VirtualAddress):
                strings.append(f"0x{address:08X} {text}")
        args.output_dir.mkdir(parents=True, exist_ok=True)
        for name, lines in (("imports.txt", imports), ("utf16_strings.txt", strings)):
            (args.output_dir / name).write_text("\n".join(lines) + "\n", encoding="utf-8", newline="\n")
        print(f"imports={sum(len(dll.imports) for dll in pe.DIRECTORY_ENTRY_IMPORT)} utf16_candidates={len(strings) - 1}")
    finally:
        pe.close()


if __name__ == "__main__":
    main()
