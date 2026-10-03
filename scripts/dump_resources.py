# -*- coding: utf-8 -*-
"""Dump PE resources (dialogs DLGTEMPLATE/EX, menus, string tables, version) from Rance7Editor.exe."""
import pefile
import struct
import argparse
from pathlib import Path

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument("exe", type=Path, help="Path to a locally supplied Rance7Editor.exe (read only)")
parser.add_argument("--output-dir", type=Path,
                    default=Path(__file__).resolve().parents[1] / "generated" / "resources")
args = parser.parse_args()
EXE = args.exe
OUT = args.output_dir
OUT.mkdir(parents=True, exist_ok=True)
RT = {1: "CURSOR", 2: "BITMAP", 3: "ICON", 4: "MENU", 5: "DIALOG", 6: "STRING",
      9: "ACCELERATOR", 10: "RCDATA", 14: "GROUP_ICON", 16: "VERSION", 24: "MANIFEST", 240: "DLGINIT"}

CLS = {0x80: "BUTTON", 0x81: "EDIT", 0x82: "STATIC", 0x83: "LISTBOX", 0x84: "SCROLLBAR", 0x85: "COMBOBOX"}
STYLE_BTN = {0x0: "PUSHBUTTON", 0x1: "DEFPUSHBUTTON", 0x3: "PUSHBOX", 0x2: "CHECKBOX(auto)", 0x4: "RADIO(auto)",
             0x6: "GROUPBOX", 0x9: "AUTO3STATE", 0x14: "AUTOCHECKBOX", 0x18: "AUTORADIOBOX"}
STYLE_ST = {0x0: "LEFTTEXT", 0x1: "LTEXT", 0x2: "CTEXT", 0x3: "RTEXT"}
STYLE_ED = {0x0: "EDITTEXT(single)", 0x4: "EDITTEXT(multi)"}


def w(d, o): return struct.unpack_from("<H", d, o)[0]
def dw(d, o): return struct.unpack_from("<I", d, o)[0]
def sz(d, o):
    """sz_Or_Ord: 0xFFFF followed by WORD ordinal, else NUL-terminated UTF16."""
    if w(d, o) == 0xFFFF:
        return f"ord:{w(d, o + 2)}", o + 4
    e = o
    while e + 2 <= len(d) and w(d, e):
        e += 2
    return d[o:e].decode("utf-16-le", errors="replace"), e + 2


def ctrlnote(style, cls):
    if cls == "BUTTON":
        return STYLE_BTN.get((style >> 0) & 0xF, "BUTTON")
    if cls == "STATIC":
        return STYLE_ST.get((style >> 0) & 0xF, "STATIC")
    if cls == "EDIT":
        return STYLE_ED.get(0x4 if style & 4 else 0, "EDIT")
    return ""


def parse_dialog_ex(d, name):
    L = [f"=== DIALOG(EX) {name} ({len(d)}B) ==="]
    o = 0
    ver, sig = w(d, o), w(d, o + 2)
    if sig == 0xFFFF and ver == 1:
        o = 4
        helpid, exst, st = dw(d, o), dw(d, o + 4), dw(d, o + 8)
        o += 12
        n = w(d, o); x, y, cx, cy = struct.unpack_from("<hhhh", d, o + 2); o += 10
        L.append(f"helpID=0x{helpid:X} style=0x{st:08X} ex=0x{exst:08X} items={n} pos=({x},{y},{cx},{cy})")
    else:
        st, exst = dw(d, o), dw(d, o + 4)
        o = 8
        n = w(d, o); x, y, cx, cy = struct.unpack_from("<hhhh", d, o + 2); o += 10
        L.append(f"style=0x{st:08X} ex=0x{exst:08X} items={n} pos=({x},{y},{cx},{cy})")
    menu, o = sz(d, o)
    cls, o = sz(d, o)
    title, o = sz(d, o)
    L.append(f"menu={menu!r} class={cls!r} caption={title!r}")
    if st & 0x40:  # DS_SETFONT
        if sig == 0xFFFF and ver == 1:
            pts, wt = w(d, o), w(d, o + 2)
            it, cs = d[o + 4], d[o + 5]
            font, o = sz(d, o + 6)
            L.append(f"font: {font!r} {pts}pt weight={wt} italic={it}")
        else:
            pts = w(d, o)
            font, o = sz(d, o + 2)
            L.append(f"font: {font!r} {pts}pt")
    o = (o + 3) & ~3
    for i in range(n):
        o = (o + 3) & ~3
        if sig == 0xFFFF and ver == 1:
            if o + 22 > len(d):
                L.append("  !! truncated"); break
            helpid = dw(d, o); exst2 = dw(d, o + 4); st2 = dw(d, o + 8)
            ix, iy, icx, icy = struct.unpack_from("<hhhh", d, o + 12)
            iid = dw(d, o + 20)
            o += 24
        else:
            if o + 18 > len(d):
                L.append("  !! truncated"); break
            st2 = dw(d, o); exst2 = dw(d, o + 4)
            ix, iy, icx, icy = struct.unpack_from("<hhhh", d, o + 8)
            iid = w(d, o + 16)
            o += 18
        c, o = sz(d, o)
        t, o = sz(d, o)
        extra = w(d, o); o += 2 + extra
        c = CLS.get(int(c.split(":")[1], 16), c) if isinstance(c, str) and c.startswith("ord:") else c
        note = ctrlnote(st2, c)
        L.append(f"  [{iid:5d}] {c:9s} {note:18s} style=0x{st2:08X} pos=({ix:4d},{iy:3d},{icx:4d},{icy:3d}) text={t!r}")
    return "\n".join(L)


def parse_menu(d, name):
    L = [f"=== MENU {name} ==="]
    ver, off = w(d, 0), w(d, 2)
    o = 4
    depth = 1
    def walk(o, depth):
        while o + 4 <= len(d):
            opt = w(d, o); o += 2
            if opt & 0x80:  # MF_POPUP
                s, o = sz(d, o)
                L.append("    " * depth + f"POPUP {s!r}")
                o = walk(o, depth + 1)
            else:
                mid = w(d, o); o += 2
                s, o = sz(d, o)
                L.append("    " * depth + f"[{mid}] {s!r}")
            o = (o + 1) & ~1
        return o
    walk(o, 1)
    return "\n".join(L)


def parse_stringtable(d):
    out, o, idx = [], 0, 0
    while o + 2 <= len(d):
        ln = w(d, o); o += 2
        if ln:
            out.append(d[o:o + ln * 2].decode("utf-16-le", errors="replace"))
        o += ln * 2
        idx += 1
    return out


pe = pefile.PE(EXE, fast_load=False)
pe.parse_data_directories()
dlg_out, str_out, menu_out, misc_out = [], [], [], []

for rtype in pe.DIRECTORY_ENTRY_RESOURCE.entries:
    rname = RT.get(rtype.struct.Id, f"TYPE_{rtype.struct.Id}") if not rtype.name else str(rtype.name)
    for rid in rtype.directory.entries:
        res_id = str(rid.name) if rid.name else rid.struct.Id
        for lang in rid.directory.entries:
            data = pe.get_data(lang.data.struct.OffsetToData, lang.data.struct.Size)
            if rname == "DIALOG":
                try:
                    dlg_out.append(parse_dialog_ex(data, res_id))
                except Exception as e:
                    dlg_out.append(f"=== DIALOG {res_id} PARSE ERROR: {e!r} (raw {len(data)}B) ===\n" +
                                   data[:64].hex())
            elif rname == "STRING":
                try:
                    base = (int(res_id) - 1) * 16
                    ss = parse_stringtable(data)
                    if any(ss):
                        str_out.append(f"--- STRINGTABLE base={base} ---")
                        for i, s in enumerate(ss):
                            if s:
                                str_out.append(f"  [{base + i}] {s}")
                except Exception as e:
                    str_out.append(f"--- STRINGTABLE {res_id} ERROR: {e}")
            elif rname == "MENU":
                try:
                    menu_out.append(parse_menu(data, res_id))
                except Exception as e:
                    menu_out.append(f"=== MENU {res_id} ERROR: {e}")
            elif rname == "VERSION":
                misc_out.append("--- VERSION INFO ---")
                for fi in pe.FileInfo[0]:
                    if fi.Key == b"StringFileInfo":
                        for st in fi.StringTable:
                            for k, v in st.entries.items():
                                misc_out.append(f"  {k.decode()}: {v.decode('gbk', errors='replace')}")
            elif rname == "MANIFEST":
                misc_out.append("--- MANIFEST ---\n" + data.decode("utf-8", errors="replace"))

(OUT / "dialogs.txt").write_text("\n\n".join(dlg_out), encoding="utf-8")
(OUT / "stringtables.txt").write_text("\n".join(str_out), encoding="utf-8")
(OUT / "menus.txt").write_text("\n\n".join(menu_out), encoding="utf-8")
(OUT / "misc.txt").write_text("\n".join(misc_out), encoding="utf-8")
print(f"dialogs={len(dlg_out)} strings={len(str_out)} menus={len(menu_out)}")
