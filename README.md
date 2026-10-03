# Rance7Editor 静态逆向分析

Rance7Editor v1.07（《战国兰斯》内存修改器）的静态分析资料，包含 Ghidra 反编译伪 C、PE 资源文本、MFC 消息映射和分析脚本。

**这是研究资料仓库。** `decompiled/*.c` 是反编译输出，不是可直接编译的原始 C/C++ 工程；仓库不提供可运行的修改器，也不包含原始 EXE、游戏本体、存档或 Ghidra 工程数据库。查看资料无需安装工具或运行游戏。

## 从哪里开始

1. [逆向分析报告](逆向分析报告.md)：程序结构、内存访问方式、功能入口和字段推断。
2. [命令映射](analysis/cmd_map.txt)：118 条命令/更新界面处理函数记录。
3. [定向反编译](decompiled/handlers.c)：116 个处理函数；[函数清单](decompiled/functions.csv)与[全量反编译](decompiled/all_functions.c)用于继续追踪调用。
4. [来源与许可说明](NOTICE.md)。

## 分析对象

| 项目 | 内容 |
|---|---|
| 文件名 | `Rance7Editor.exe` |
| 文件版本 | `1.0.7.0` |
| 原程序署名 | Snowrabbit2000 |
| 文件大小 | 716,288 字节 |
| SHA-256 | `bd5d6330da4a27bba88a7754466a53d9fa0b530b8f7e978660d2f3c15255557d` |
| 格式 | PE32 / x86，MFC |
| 分析日期 | 2026-09-16 |
| 分析工具 | Ghidra 12.1.3、Python / pefile |

文中的地址、字段和调用关系均对应上述样本，依据反编译代码、PE 资源和调用点分析。其他修改器或游戏版本需要重新核对。

## 目录

```text
analysis/          导入表、字符串、消息映射及处理函数地址
decompiled/        3,469 个函数的伪 C、函数清单及定向反编译
resources/         15 个对话框、菜单、字符串表和版本信息的文本转储
scripts/           PE 解析、命令映射整理和静态读写调用统计
ghidra_scripts/    Ghidra Java 导出脚本
逆向分析报告.md     主报告
```

`analysis/`、`decompiled/`、`resources/` 保存分析结果。脚本默认将新结果写入 `generated/`，便于比较。

## 复现 Python 分析

运行环境：Python 3.13.9、`pefile==2024.8.26`。以下示例使用 Windows PowerShell，需要自行准备 `Rance7Editor.exe` 样本。

```powershell
python -m venv .venv
.\.venv\Scripts\python.exe -m pip install -r requirements.txt

# 换成你的样本路径。
$sample = '.\samples\Rance7Editor.exe'
Get-FileHash -Algorithm SHA256 -LiteralPath $sample

.\.venv\Scripts\python.exe scripts/dump_resources.py $sample
# 使用单独的菜单解析脚本覆盖批量导出的菜单结果。
.\.venv\Scripts\python.exe scripts/fix_menu.py $sample
.\.venv\Scripts\python.exe scripts/dump_rdata_strings.py $sample
.\.venv\Scripts\python.exe scripts/find_msgmaps.py $sample
.\.venv\Scripts\python.exe scripts/make_cmd_map.py --input generated/analysis/msgmap_handlers.txt
.\.venv\Scripts\python.exe scripts/rank_rw.py
```

脚本支持 `--help`。资源批量导出使用 `--output-dir`，其他写文件脚本使用 `--output`；默认位置按脚本所在仓库计算，不依赖本机盘符。`make_cmd_map.py` 不传 `--input` 时读取归档的 `analysis/msgmap_handlers.txt`；`rank_rw.py` 可通过位置参数指定另一个伪 C 文件。这两个整理脚本仅依赖 Python 标准库。

## Ghidra 导出

将 `ghidra_scripts/` 加入 Ghidra 脚本路径，导入你自己的样本并完成分析后：

- `ExportAll.java <输出目录>` 导出 `all_functions.c` 和 `functions.csv`。
- `DecompAt.java <地址清单> <输出文件>` 定向导出处理函数，可使用 `analysis/handler_addrs.txt`。

通过 Ghidra 的 `analyzeHeadless` 传递 `-scriptPath` 与 `-postScript` 参数，输出到 `generated/decompiled/`，并事先创建该目录。`ExportAll.java` 使用 Windows 路径拼接；`DecompAt.java` 使用 JVM 默认文本编码，运行前请确认编码设置。

## 已知限制

- 反编译器推断的类型、调用约定和变量名可能不准确；全文也包含 CRT/MFC 等库函数。
- 解析脚本针对该样本编写；资源类别名称、菜单层级、字符串编号仍可能有解析误差。`resources/misc.txt` 的部分中文版本字段存在编码乱码。
- `analysis/imports.txt`、`analysis/utf16_strings.txt` 和处理函数地址清单未附完整生成脚本，复现步骤只覆盖已有脚本支持的产物。
- 武将导出文件格式以及部分控件与结构字段的对应关系仍待补充。

## 来源与许可

原程序署名、第三方内容来源和许可说明见 [NOTICE.md](NOTICE.md)。
