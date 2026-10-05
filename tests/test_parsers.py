"""Regression fixtures built from the documented Win32 binary templates."""
import struct
import sys
import unittest
from pathlib import Path
from types import SimpleNamespace

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scripts"))
from pe_resources import parse_menu, parse_stringtable, parse_dialog, control_note, menu_labels
from mfc_maps import find_message_maps, entry_kind
from dump_pe import utf16_candidates


def word(value):
    return struct.pack("<H", value)


def string(text):
    return text.encode("utf-16-le") + b"\0\0"


def command(flags, command_id, text):
    return struct.pack("<HH", flags, command_id) + string(text)


def dialog_fixture(extended, extra=b"abc"):
    if extended:
        data = struct.pack("<HHIIIHhhhh", 1, 0xFFFF, 0, 0, 0, 2, 0, 0, 50, 40)
    else:
        data = struct.pack("<IIHhhhh", 0, 0, 2, 0, 0, 50, 40)
    data += b"\0\0\0\0" + string("Fixture")
    for index in range(2):
        data += b"\0" * (-len(data) % 4)
        if extended:
            data += struct.pack("<IIIhhhhI", 0, 0, 3, 1, 2, 10, 12, 100 + index)
        else:
            data += struct.pack("<IIhhhhH", 3, 0, 1, 2, 10, 12, 100 + index)
        data += struct.pack("<HH", 0xFFFF, 0x80) + string("Check")
        payload = extra if index == 0 else b""
        size = len(payload) + (2 if payload and not extended else 0)
        data += word(size) + payload
    return data


class ResourceTests(unittest.TestCase):
    def test_menu_returns_to_parent_and_consumes_separator(self):
        data = b"\0\0\0\0" + word(0x10) + string("First")
        data += command(0, 10, "One") + command(0x0800, 0, "") + command(0x80, 11, "Two")
        data += word(0x90) + string("Second") + command(0x80, 12, "Three")
        menus = parse_menu(data)
        self.assertEqual([m["text"] for m in menus], ["First", "Second"])
        self.assertEqual([m["id"] for m in menus[0]["children"]], [10, 0, 11])
        self.assertEqual(menus[1]["children"][0]["id"], 12)

    def test_menu_header_offset(self):
        menu = struct.pack("<HH", 0, 2) + b"xx" + command(0x80, 9, "Nine")
        self.assertEqual(parse_menu(menu)[0]["id"], 9)

    def test_repeated_menu_id_keeps_both_paths(self):
        menu = b"\0\0\0\0" + word(0x10) + string("First") + command(0x80, 9, "Nine")
        menu += word(0x90) + string("Second") + command(0x80, 9, "Again")
        self.assertEqual(menu_labels(parse_menu(menu))[9], ["First>Nine", "Second>Again"])

    def test_menu_missing_end_is_rejected(self):
        with self.assertRaises(ValueError):
            parse_menu(b"\0\0\0\0" + command(0, 9, "Nine"))

    def test_unsupported_menuex_is_rejected(self):
        with self.assertRaises(ValueError):
            parse_menu(struct.pack("<HH", 1, 0))

    def test_stringtable_preserves_empty_slots(self):
        strings = ["", "Alpha", "", "Beta"] + [""] * 12
        data = b"".join(word(len(s)) + s.encode("utf-16-le") for s in strings)
        result = parse_stringtable(data)
        self.assertEqual(result, strings)
        self.assertEqual([(i, s) for i, s in enumerate(result) if s], [(1, "Alpha"), (3, "Beta")])

    def test_incomplete_stringtable_is_rejected(self):
        with self.assertRaises(ValueError):
            parse_stringtable(b"\0\0" * 15)

    def test_class_atom_is_numeric_and_button_style_is_correct(self):
        dialog = parse_dialog(dialog_fixture(True))
        self.assertEqual([c["class"] for c in dialog["controls"]], ["BUTTON", "BUTTON"])
        self.assertEqual(control_note(3, "BUTTON"), "AUTOCHECKBOX")
        self.assertEqual(control_note(7, "BUTTON"), "GROUPBOX")
        self.assertEqual(control_note(2, "STATIC"), "RIGHT")

    def test_extended_creation_data_excludes_size_word(self):
        dialog = parse_dialog(dialog_fixture(True))
        self.assertEqual(dialog["controls"][0]["creation_data"], b"abc")
        self.assertEqual(dialog["controls"][1]["id"], 101)

    def test_classic_creation_data_includes_size_word(self):
        dialog = parse_dialog(dialog_fixture(False))
        self.assertEqual(dialog["controls"][0]["creation_data"], b"abc")
        self.assertEqual(dialog["controls"][1]["id"], 101)

    def test_truncated_dialog_is_rejected(self):
        with self.assertRaises(ValueError):
            parse_dialog(dialog_fixture(True)[:-1])

    def test_utf16_candidates_keep_addresses(self):
        data = b"\xff\xff" + string("战国兰斯") + string("Short")
        self.assertEqual(list(utf16_candidates(data, 0x4000)), [(0x4002, "战国兰斯"), (0x400C, "Short")])


class FakeSection:
    def __init__(self, name, rva, data, flags):
        self.Name, self.VirtualAddress, self.data, self.Characteristics = name, rva, data, flags

    def get_data(self):
        return self.data


def fake_pe(descriptor=True, handler=0x401000, terminate=True):
    data = bytearray(128)
    if descriptor:
        struct.pack_into("<II", data, 0, 0x401010, 0x402020)
    # The code belongs to this row, not the following row.
    struct.pack_into("<6I", data, 32, 0x111, 0, 32848, 32848, 57, handler)
    struct.pack_into("<6I", data, 56, 0x111, 0xFFFFFFFF, 32848, 32848, 65, 0x401030)
    if not terminate:
        data = data[:80]
    return SimpleNamespace(FILE_HEADER=SimpleNamespace(Machine=0x14C),
                           OPTIONAL_HEADER=SimpleNamespace(Magic=0x10B, ImageBase=0x400000),
                           sections=[FakeSection(b".text\0", 0x1000, b"\x90" * 128, 0x20000000),
                                     FakeSection(b".rdata\0", 0x2000, bytes(data), 0x40000000)])


class MessageMapTests(unittest.TestCase):
    def test_command_and_update_use_own_entry_fields(self):
        maps = find_message_maps(fake_pe())
        self.assertEqual(len(maps), 1)
        entries = maps[0]["entries"]
        self.assertEqual([(e["address"], e["handler"]) for e in entries], [(0x402020, 0x401000), (0x402038, 0x401030)])
        self.assertEqual([entry_kind(e) for e in entries], ["ON_COMMAND/BN_CLICKED", "ON_UPDATE_COMMAND_UI"])

    def test_unreferenced_entry_like_words_are_ignored(self):
        self.assertEqual(find_message_maps(fake_pe(descriptor=False)), [])

    def test_non_executable_handler_is_rejected(self):
        self.assertEqual(find_message_maps(fake_pe(handler=0x402010)), [])

    def test_missing_table_terminator_is_rejected(self):
        self.assertEqual(find_message_maps(fake_pe(terminate=False)), [])

    def test_x64_is_rejected(self):
        pe = fake_pe()
        pe.FILE_HEADER.Machine = 0x8664
        with self.assertRaises(ValueError):
            find_message_maps(pe)


if __name__ == "__main__":
    unittest.main()
