# Rance7Editor 静态逆向分析

Rance7Editor v1.07（《战国兰斯》内存修改器）的静态分析资料，包含 Ghidra 反编译伪 C、PE 资源文本、MFC 消息映射和分析脚本。

**这是研究资料仓库。** `decompiled/*.c` 是反编译输出，不是可直接编译的原始 C/C++ 工程；仓库不提供可运行的修改器，也不包含原始 EXE、游戏本体、存档或 Ghidra 工程数据库。查看资料无需安装工具或运行游戏。

## 从哪里开始

1. [逆向分析报告](逆向分析报告.md)：程序结构、内存访问方式、功能入口和字段推断。
2. [命令映射](analysis/cmd_map.txt)：118 条命令/更新界面处理函数记录。
3. [定向反编译](decompiled/handlers.c)：116 个处理函数；[函数清单](decompiled/functions.csv)与[全量反编译](decompiled/all_functions.c)用于继续追踪调用。
4. [来源与许可说明](NOTICE.md)、[公开发布检查记录](docs/PUBLICATION_AUDIT.md)。

## 分析对象与证据边界

| 项目 | 内容 |
|---|---|
| 文件名 | `Rance7Editor.exe` |
| 文件版本 | `1.0.7.0` |
| 原程序署名 | Snowrabbit2000 |
| 文件大小 | 716,288 字节 |
| SHA-256 | `bd5d6330da4a27bba88a7754466a53d9fa0b530b8f7e978660d2f3c15255557d` |
| 格式 | PE32 / x86，MFC |
| 原分析日期 | 2026-09-16 |
| 原分析记录所用工具 | Ghidra 12.1.3、Python / pefile |

哈希与大小在 2026-10-03 对本地样本只读核验。所有地址、数量、字段含义和调用关系均针对该样本；静态推断不等同于真实游戏中的兼容性或运行验证。公开整理过程中没有启动原程序，也没有连接游戏进程。

## 目录

```text
analysis/          导入表、字符串、消息映射及处理函数地址
decompiled/        3,469 个函数的伪 C、函数清单及定向反编译
resources/         15 个对话框、菜单、字符串表和版本信息的文本转储
scripts/           PE 解析、命令映射整理和静态读写调用统计
ghidra_scripts/    Ghidra Java 导出脚本
docs/              发布检查记录
逆向分析报告.md     主报告
```

`analysis/`、`decompiled/`、`resources/` 是保留的历史分析产物。新生成文件默认写入已忽略的 `generated/`，便于与这些资料比较。

## 复现 Python 分析

以下示例使用 Windows PowerShell。公开整理时已验证 Python 3.13.9 与 `pefile==2024.8.26`。需要解析 PE 的四个脚本要求你自行提供有权使用的本地样本；脚本只读取该文件。

```powershell
python -m venv .venv
.\.venv\Scripts\python.exe -m pip install -r requirements.txt

# 换成你自己的本地样本路径。samples/ 已加入忽略规则。
$sample = '.\samples\Rance7Editor.exe'
Get-FileHash -Algorithm SHA256 -LiteralPath $sample

.\.venv\Scripts\python.exe scripts/dump_resources.py $sample
# 历史资源脚本的菜单分支需要后续修正，顺序不可颠倒。
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

建议通过 Ghidra 的 `analyzeHeadless` 传递 `-scriptPath` 与 `-postScript` 参数，输出到 `generated/decompiled/`，并事先创建该目录。现有 `ExportAll.java` 使用 Windows 路径拼接；`DecompAt.java` 使用 JVM 默认文本编码。2026-10-03 的发布检查没有重新运行 Ghidra，因此不保证其他版本或平台的导出完全相同。

## 已知限制

- 反编译器推断的类型、调用约定和变量名可能不准确；全文也包含 CRT/MFC 等库函数。
- 原有解析脚本针对该样本编写，不是通用 PE/MFC 解析器。部分资源类别名称、菜单层级、字符串编号仍可能有解析误差；`resources/misc.txt` 的部分中文版本字段存在历史编码乱码。本次保留这些原始产物，没有把它们改写为已验证结果。
- `analysis/imports.txt`、`analysis/utf16_strings.txt` 和最初的处理函数地址清单缺少完整生成脚本；本仓库不能声称一条命令重建全部历史资料。
- 武将导出文件格式以及部分控件与结构字段的对应关系仍待补充。

## 提交范围与来源

后续提交前请检查 `git diff --cached` 和 `git status --short --ignored`，避免加入样本、游戏资源、存档、密钥及本机配置。`.gitignore` 是辅助保护，不能替代内容检查。

原程序及相关游戏、第三方库的权利和署名按 [NOTICE.md](NOTICE.md) 保留。仓库目前未附统一开源许可证；公开可见不代表所有内容获得了重新授权。
