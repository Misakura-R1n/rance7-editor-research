# 资源与消息表格式

这些读取器针对 README 中列出的 PE32 x86 样本。地址使用 PE 首选映像基址下的 VA；运行时模块重定位后不能直接使用这些绝对地址。

## PE 资源

- **菜单**：标准 `MENUITEMTEMPLATE` 使用 `0x0010` 标识子菜单，`0x0080` 结束当前层的最后一个条目。子菜单条目没有命令 ID，普通条目和分隔线都需要读取完整的 ID 与字符串。菜单头的 offset 按字节跳过。当前读取器不支持 MENUEX，遇到该格式会报错。
- **字符串表**：每个资源块固定包含 16 个槽位，空字符串也占位。编号为 `(块编号 - 1) × 16 + 槽位索引`，不能按非空字符串重新编号。
- **对话框**：控件按 DWORD 对齐。类序号 `0x80`–`0x85` 分别表示 BUTTON、EDIT、STATIC、LISTBOX、SCROLLBAR、COMBOBOX；序号按整数读取。普通模板的非零 creation-data 长度包含长度 WORD，扩展模板的 extraCount 不包含它。
- **版本资源**：`pefile` 返回的版本字符串字节按 UTF-8 解码，文本输出保留原中文。

结构依据：[MENUITEMTEMPLATE](https://learn.microsoft.com/en-us/windows/win32/api/winuser/ns-winuser-menuitemtemplate)、[MENUITEMTEMPLATEHEADER](https://learn.microsoft.com/en-us/windows/win32/api/winuser/ns-winuser-menuitemtemplateheader)、[STRINGTABLE](https://learn.microsoft.com/en-us/windows/win32/menurc/stringtable-resource)、[DLGITEMTEMPLATE](https://learn.microsoft.com/en-us/windows/win32/api/winuser/ns-winuser-dlgitemtemplate)、[DLGITEMTEMPLATEEX](https://learn.microsoft.com/en-us/windows/win32/dlgbox/dlgitemtemplateex)。

## MFC 消息表

本样本的 x86 `AFX_MSGMAP_ENTRY` 为 24 字节：

| 相对偏移 | DWORD 字段 |
|---|---|
| +0x00 | nMessage |
| +0x04 | nCode |
| +0x08 | nID |
| +0x0C | nLastID |
| +0x10 | nSig |
| +0x14 | pfn |

读取器先寻找 `.rdata` 中引用条目数组的描述符，再按 24 字节读取到全零终止项，并检查处理函数落在可执行节。当前检测范围要求签名为 1–255，不支持把注册消息指针放入签名字段的其他 MFC 布局。

`nMessage=WM_COMMAND` 时，当前条目的 `nCode=0` 表示命令/按钮单击处理，`nCode=0xFFFFFFFF` 表示界面状态更新。`cmd_map.txt` 只列出在菜单资源中出现的命令，保留不同类消息表中的同 ID 记录；它不是所有窗口消息的清单。

`msgmap_handlers.json` 包含结构化表、条目地址和样本 SHA-256。`make_cmd_map.py` 校验输入样本的哈希，菜单路径直接从样本提取。`handler_addrs.txt` 列出所有表中的不同处理函数地址，包含 MFC 基类函数。

消息与处理函数规则见 [MFC TN006: Message Maps](https://learn.microsoft.com/en-us/cpp/mfc/tn006-message-maps)。

## 反编译与字符串候选

`all_functions.c` 和 `handlers.c` 保留 Ghidra 自动推断的伪 C。函数原型、寄存器参数、共享尾部和间接跳转可能推断不完整，涉及读写条件时应同时查看机器指令。例如 `FUN_00408C70` 使用 ESI 上下文与 EDX 参数，伪 C 的常规调用约定不能完整表示其接口；`FUN_004088D0` / `FUN_00408A90` 被误推断为 `void`，实际通过 EAX 返回 PID / VM 模块基址。

`functions.csv` 的名称与参数列按 CSV 规则引用，名称中的逗号不会增加列数。`size` 是 Ghidra 函数体包含的地址数，不代表一个连续的字节区间。

数据节中的 GBK/UTF-8 与 UTF-16LE 提取结果是字符串候选，原始数据也可能恰好满足字符过滤条件；地址用于回查字节，候选列表不能用于证明字段语义。
