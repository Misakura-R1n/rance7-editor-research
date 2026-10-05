"""Locate descriptor-backed x86 MFC message maps in a PE image."""
import struct


def find_message_maps(pe):
    if pe.FILE_HEADER.Machine != 0x14C or pe.OPTIONAL_HEADER.Magic != 0x10B:
        raise ValueError("message-map reader requires PE32 x86")
    image_base = pe.OPTIONAL_HEADER.ImageBase
    rdata = next((s for s in pe.sections if s.Name.rstrip(b"\0") == b".rdata"), None)
    if rdata is None:
        raise ValueError("missing .rdata section")
    data = rdata.get_data()
    base = image_base + rdata.VirtualAddress
    code_ranges = [(image_base + s.VirtualAddress, image_base + s.VirtualAddress + len(s.get_data()))
                   for s in pe.sections if s.Characteristics & 0x20000000]

    def is_code(address):
        return any(low <= address < high for low, high in code_ranges)

    def read_table(address):
        offset, entries = address - base, []
        while 0 <= offset <= len(data) - 24 and len(entries) < 1000:
            message, code, first_id, last_id, signature, handler = struct.unpack_from("<6I", data, offset)
            if not any((message, code, first_id, last_id, signature, handler)):
                return entries
            if not (0 < message <= 0xFFFF and first_id <= last_id <= 0xFFFF
                    and 0 < signature < 0x100 and is_code(handler)):
                return None
            entries.append({"address": base + offset, "message": message, "code": code,
                            "first_id": first_id, "last_id": last_id,
                            "signature": signature, "handler": handler})
            offset += 24
        return None

    maps = {}
    for offset in range(0, len(data) - 7, 4):
        get_base_map, table = struct.unpack_from("<2I", data, offset)
        if is_code(get_base_map) and base <= table < base + len(data):
            entries = read_table(table)
            if entries:
                maps.setdefault(table, {"descriptor": base + offset, "get_base_map": get_base_map,
                                        "table": table, "entries": entries})
    return [maps[table] for table in sorted(maps)]


MESSAGE_NAMES = {1: "WM_CREATE", 2: "WM_DESTROY", 5: "WM_SIZE", 0xF: "WM_PAINT",
                 0x4E: "WM_NOTIFY", 0x100: "WM_KEYDOWN", 0x111: "WM_COMMAND",
                 0x113: "WM_TIMER", 0x118: "WM_INITMENUPOPUP", 0x201: "WM_LBUTTONDOWN",
                 0x202: "WM_LBUTTONUP", 0x203: "WM_LBUTTONDBLCLK", 0x231: "WM_ENTERSIZEMOVE"}


def entry_kind(entry):
    message, code = entry["message"], entry["code"]
    if message == 0x111:
        if code == 0xFFFFFFFF:
            return "ON_UPDATE_COMMAND_UI"
        if code == 0:
            return "ON_COMMAND/BN_CLICKED"
        return f"ON_CONTROL(code=0x{code:08X})"
    return MESSAGE_NAMES.get(message, f"MSG_0x{message:04X}")
