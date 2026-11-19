# Rance7Editor 静态逆向分析

Rance7Editor v1.07 是《战国兰斯》的内存修改器。本项目通过阅读程序文件，整理出每个菜单会执行哪些操作，以及金钱、武将和战斗数据分别存在哪里。这种不运行程序的分析方法叫作**静态分析**。

## 从哪里开始

- 想了解修改器怎样读写游戏数据，可以先看金钱怎么锁定、武将改动怎样保存。[逆向分析报告](逆向分析报告.md)
- 想查某个菜单的作用，可以按菜单文字或命令编号搜索。79 个菜单命令共有 102 条记录，其中既有点击菜单时执行的函数，也有更新菜单勾选状态的函数。[菜单与函数对照表](analysis/cmd_map.txt)
- 想读具体代码，可以从 225 个处理窗口消息的函数入手，再按地址查找它们调用的函数。Ghidra 把机器指令整理成了便于阅读的 C 语言写法，称为**伪 C**。[消息处理函数](decompiled/handlers.c) · [函数清单](decompiled/functions.csv) · [全部伪 C](decompiled/all_functions.c)

阅读这些资料无需安装工具或运行游戏。要重新提取数据，先自行准备原始 EXE，再按下文安装工具。要重新编译修改器，还需要原始 C++ 工程。游戏和存档需另行取得，Ghidra 分析工程可在本机创建。

## 分析对象

| 项目 | 内容 |
|---|---|
| 文件名 | `Rance7Editor.exe` |
| 文件版本 | `1.0.7.0` |
| 原程序署名 | Snowrabbit2000 |
| 文件大小 | 716,288 字节 |
| SHA-256 校验值 | `bd5d6330da4a27bba88a7754466a53d9fa0b530b8f7e978660d2f3c15255557d` |
| 程序格式 | 32 位 Windows 程序（PE32，x86），界面使用 MFC 库 |
| 最近一次核对日期 | 2026-11-19 |
| 分析工具 | Ghidra 12.1.3、Python、pefile |

报告中的地址和字段含义都针对这个样本。用自己的文件复查时，可以先比较 SHA-256 校验值。其他版本的修改器或游戏需要另行核对。

## 目录

| 目录 | 内容 |
|---|---|
| `analysis/` | 程序调用的外部函数、提取的文字、菜单命令与处理函数的对应关系 |
| `decompiled/` | 3,594 个函数的伪 C、函数清单，以及单独整理的消息处理函数 |
| `resources/` | 从程序中读出的 15 个对话框、菜单、字符串表和版本信息 |
| `scripts/` | 读取程序文件、整理菜单对照表和统计读写函数的 Python 脚本 |
| `ghidra_scripts/` | 从 Ghidra 导出函数的 Java 脚本 |
| `tests/` | 检查资源和消息表读取结果的测试 |
| `docs/` | 菜单、对话框、消息表等数据在文件中的存放方式 |

脚本默认把新结果写到 `generated/`。可以将它们与 `analysis/`、`decompiled/` 和 `resources/` 中的已有结果比较。

## 用 Python 重新提取数据

以下命令在项目根目录的 Windows PowerShell 中运行。项目使用 Python 3.13.9 和 `pefile==2024.8.26`。完整验证还会用到 `capstone==5.0.7`，两项依赖都列在 `requirements.txt` 中。

先创建 Python 环境，把 `$sample` 换成自己的 EXE 路径，检查输出的校验值是否与上表一致。

```powershell
python -m venv .venv
.\.venv\Scripts\python.exe -m pip install -r requirements.txt

$sample = '.\samples\Rance7Editor.exe'
Get-FileHash -Algorithm SHA256 -LiteralPath $sample
```

再依次提取界面资源、程序信息、文字和消息表，生成菜单对照表。最后一条命令按函数统计，列出哪些函数的伪 C 里读写游戏内存的调用最多。

```powershell
.\.venv\Scripts\python.exe scripts/dump_resources.py $sample
.\.venv\Scripts\python.exe scripts/dump_pe.py $sample
.\.venv\Scripts\python.exe scripts/dump_rdata_strings.py $sample
.\.venv\Scripts\python.exe scripts/find_msgmaps.py $sample
.\.venv\Scripts\python.exe scripts/make_cmd_map.py $sample --input generated/analysis/msgmap_handlers.json
.\.venv\Scripts\python.exe scripts/rank_rw.py
```

各脚本都可以用 `--help` 查看参数。

- `dump_resources.py` 和 `dump_pe.py` 用 `--output-dir` 指定输出目录。单独提取菜单可用 `fix_menu.py`，它和 `dump_resources.py` 使用同一套读取方法。
- `find_msgmaps.py` 同时生成文本、JSON 和处理函数地址清单。它用 `--output` 指定文本输出路径。`fix_menu.py`、`dump_rdata_strings.py` 和 `make_cmd_map.py` 也用 `--output` 指定输出文件。
- `make_cmd_map.py` 会核对样本的 SHA-256。省略 `--input` 时，它读取仓库已有的 `analysis/msgmap_handlers.json`。
- `rank_rw.py` 只需 Python 标准库。它默认只统计修改器自身代码范围内的函数。要分析另一份伪 C，把文件路径加在命令末尾即可。

## 用 Ghidra 导出伪 C

先按上节生成处理函数地址清单，再把 `ghidra_scripts/` 加入 Ghidra 的脚本路径。导入样本并完成分析后，按下列顺序导出。

1. `DecompAt.java <地址清单> <输出文件>` 根据清单找到消息处理函数并导出伪 C。也可以使用仓库已有的 `analysis/handler_addrs.txt`。
2. `ExportAll.java <输出目录>` 导出 `all_functions.c` 和 `functions.csv`。按这个顺序执行，上一步找到的函数也会出现在总清单中。

下面是 Ghidra 命令行工具 `analyzeHeadless` 的完整示例。将 `$headless` 换成本机的安装路径。脚本会创建输出目录，导出的文本使用 UTF-8 编码。

```powershell
$headless = 'C:\tools\ghidra_12.1.3_PUBLIC\support\analyzeHeadless.bat'
New-Item -ItemType Directory -Force generated/ghidra_projects | Out-Null
& $headless generated/ghidra_projects Rance7Research -import $sample `
  -scriptPath ghidra_scripts `
  -postScript DecompAt.java generated/analysis/handler_addrs.txt generated/decompiled/handlers.c `
  -postScript ExportAll.java generated/decompiled
```

## 验证

第一条命令使用测试自带的数据。第二条命令需要上表对应的 EXE。

```powershell
.\.venv\Scripts\python.exe -m unittest discover -s tests -v
.\.venv\Scripts\python.exe scripts/verify_project.py $sample
```

完整验证会重新提取数据，与仓库里的结果逐项比较。脚本会检查每个消息处理函数是否列入清单，并对照原始字节核对消息表，包括 MFC 自带的消息和程序运行时注册的消息。它还会核对基本信息和武将界面中几个关键字段的地址。在 Windows 上，脚本会通过系统自带的接口读取菜单和字符串表，比较菜单层级和文字编号。整个过程只把 EXE 当作数据文件读取。

## 如何理解分析结果

- 伪 C 中既有修改器自己的函数，也有 MFC 界面库和 C 运行库（CRT）的函数。Ghidra 会推测变量类型、名称和传参方式，关键细节需要结合原始指令核对。
- 文字提取脚本会列出看起来像文字的字节。有些普通数据也符合筛选条件，可以按结果中的地址回查。[格式说明](docs/FORMATS.md)
- 报告列出了哪些操作写入游戏内存、哪些操作保存到磁盘。武将文件（`.psi`）中每个字段的含义、部分界面控件对应的地址，以及修改在游戏运行中的实际效果，仍待核对。

原程序署名及第三方资料的使用说明见[来源与许可说明](NOTICE.md)。
