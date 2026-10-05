"""Readers for classic MENU, DIALOG/DIALOGEX and STRING resources.

Formats follow the Microsoft Win32 resource template documentation.
Unsupported menu formats and truncated data fail explicitly.
"""
import struct

CLASSES = {0x80: "BUTTON", 0x81: "EDIT", 0x82: "STATIC", 0x83: "LISTBOX",
           0x84: "SCROLLBAR", 0x85: "COMBOBOX"}
BUTTON_STYLES = {0: "PUSHBUTTON", 1: "DEFPUSHBUTTON", 2: "CHECKBOX",
                 3: "AUTOCHECKBOX", 4: "RADIOBUTTON", 5: "3STATE",
                 6: "AUTO3STATE", 7: "GROUPBOX", 8: "USERBUTTON",
                 9: "AUTORADIOBUTTON", 11: "OWNERDRAW"}
STATIC_STYLES = {0: "LEFT", 1: "CENTER", 2: "RIGHT", 3: "ICON",
                 4: "BLACKRECT", 5: "GRAYRECT", 6: "WHITERECT",
                 7: "BLACKFRAME", 8: "GRAYFRAME", 9: "WHITEFRAME",
                 11: "SIMPLE", 12: "LEFTNOWORDWRAP", 14: "BITMAP"}


class Reader:
    def __init__(self, data, offset=0):
        self.data = data
        self.offset = offset

    def take(self, size):
        if size < 0 or self.offset + size > len(self.data):
            raise ValueError(f"truncated resource at byte 0x{self.offset:X} (need {size})")
        result = self.data[self.offset:self.offset + size]
        self.offset += size
        return result

    def unpack(self, fmt):
        return struct.unpack(fmt, self.take(struct.calcsize(fmt)))

    def word(self):
        return self.unpack("<H")[0]

    def align(self, boundary):
        self.take((-self.offset) % boundary)

    def string(self):
        start = self.offset
        while self.word():
            pass
        return self.data[start:self.offset - 2].decode("utf-16-le")

    def string_or_ordinal(self):
        if self.word() == 0xFFFF:
            return self.word()
        self.offset -= 2
        return self.string()

    def finish(self):
        if any(self.data[self.offset:]):
            raise ValueError(f"unconsumed resource data at byte 0x{self.offset:X}")


def parse_menu(data):
    r = Reader(data)
    version, offset = r.unpack("<HH")
    if version != 0:
        raise ValueError(f"unsupported MENU template version {version}")
    r.take(offset)

    def level(depth):
        if depth > 64:
            raise ValueError("menu nesting exceeds 64 levels")
        items = []
        while True:
            options = r.word()
            popup = bool(options & 0x0010)
            command = None if popup else r.word()
            item = {"options": options, "id": command, "text": r.string()}
            if popup:
                item["children"] = level(depth + 1)
            items.append(item)
            if options & 0x0080:  # MF_END terminates this sibling list.
                return items

    items = level(0)
    r.finish()
    return items


def render_menu(items, depth=0):
    lines = []
    for item in items:
        prefix = "  " * depth
        if "children" in item:
            lines.append(prefix + f"POPUP {item['text']!r}")
            lines.extend(render_menu(item["children"], depth + 1))
        elif item["options"] & 0x0800 or (item["id"] == 0 and not item["text"]):
            lines.append(prefix + "--------")
        else:
            lines.append(prefix + f"[{item['id']}] {item['text']!r}")
    return lines


def menu_labels(items, prefix=()):
    result = {}
    for item in items:
        path = (*prefix, item["text"])
        if "children" in item:
            for command, paths in menu_labels(item["children"], path).items():
                result.setdefault(command, []).extend(paths)
        elif item["id"]:
            result.setdefault(item["id"], []).append(">".join(path))
    return result


def parse_stringtable(data):
    r = Reader(data)
    strings = [r.take(r.word() * 2).decode("utf-16-le") for _ in range(16)]
    r.finish()
    return strings


def parse_dialog(data):
    r = Reader(data)
    extended = data[:4] == b"\x01\x00\xff\xff"
    if extended:
        version, signature, help_id, ex_style, style, count, x, y, cx, cy = r.unpack("<HHIIIHhhhh")
    else:
        style, ex_style, count, x, y, cx, cy = r.unpack("<IIHhhhh")
        help_id = 0
    dialog = {"extended": extended, "help_id": help_id, "ex_style": ex_style,
              "style": style, "count": count, "position": (x, y, cx, cy),
              "menu": r.string_or_ordinal(), "class": r.string_or_ordinal(),
              "title": r.string(), "font": None, "controls": []}
    if style & 0x40:
        points = r.word()
        weight, italic, charset = r.unpack("<HBB") if extended else (None, None, None)
        dialog["font"] = {"name": r.string(), "points": points, "weight": weight,
                          "italic": italic, "charset": charset}
    for _ in range(count):
        r.align(4)
        if extended:
            help_id, ex_style, style, x, y, cx, cy, control_id = r.unpack("<IIIhhhhI")
        else:
            style, ex_style, x, y, cx, cy, control_id = r.unpack("<IIhhhhH")
            help_id = 0
        window_class = r.string_or_ordinal()
        title = r.string_or_ordinal()
        extra = r.word()
        if not extended and extra == 1:
            raise ValueError("invalid classic creation-data size 1")
        creation_data = r.take(extra if extended else max(0, extra - 2))
        dialog["controls"].append({"id": control_id, "class": CLASSES.get(window_class, window_class),
                                   "title": title, "style": style, "ex_style": ex_style,
                                   "help_id": help_id, "position": (x, y, cx, cy),
                                   "creation_data": creation_data})
    r.finish()
    return dialog


def control_note(style, window_class):
    if window_class == "BUTTON":
        return BUTTON_STYLES.get(style & 0xF, f"TYPE_{style & 0xF}")
    if window_class == "STATIC":
        return STATIC_STYLES.get(style & 0x1F, f"TYPE_{style & 0x1F}")
    if window_class == "EDIT":
        return "MULTILINE" if style & 4 else "SINGLELINE"
    return ""


def render_dialog(dialog, name, size):
    kind = "EX" if dialog["extended"] else "STD"
    lines = [f"=== DIALOG({kind}) {name} ({size}B) ===",
             f"helpID=0x{dialog['help_id']:X} style=0x{dialog['style']:08X} "
             f"ex=0x{dialog['ex_style']:08X} items={dialog['count']} pos={dialog['position']}",
             f"menu={dialog['menu']!r} class={dialog['class']!r} caption={dialog['title']!r}"]
    font = dialog["font"]
    if font:
        lines.append(f"font: {font['name']!r} {font['points']}pt weight={font['weight']} "
                     f"italic={font['italic']} charset={font['charset']}")
    for control in dialog["controls"]:
        x, y, cx, cy = control["position"]
        cls = str(control["class"])
        note = control_note(control["style"], control["class"])
        lines.append(f"  [{control['id']:5d}] {cls:9s} {note:18s} style=0x{control['style']:08X} "
                     f"pos=({x:4d},{y:3d},{cx:4d},{cy:3d}) text={control['title']!r}")
    return "\n".join(lines)


def resource_entries(pe, type_id):
    for resource_type in pe.DIRECTORY_ENTRY_RESOURCE.entries:
        if resource_type.struct.Id != type_id:
            continue
        for resource_id in resource_type.directory.entries:
            name = str(resource_id.name) if resource_id.name else resource_id.struct.Id
            for language in resource_id.directory.entries:
                entry = language.data.struct
                yield name, language.struct.Id, pe.get_data(entry.OffsetToData, entry.Size)
