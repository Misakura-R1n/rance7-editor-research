# -*- coding: utf-8 -*-
"""Build final command-id -> handler -> meaning table using menu labels (authoritative)."""
import re
import argparse
from pathlib import Path

BASE = Path(__file__).resolve().parents[1]
parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument("--input", type=Path, default=BASE / "analysis" / "msgmap_handlers.txt")
parser.add_argument("--output", type=Path, default=BASE / "generated" / "analysis" / "cmd_map.txt")
args = parser.parse_args()
args.output.parent.mkdir(parents=True, exist_ok=True)

# authoritative labels from fixed menu parse + context menu + dialog analysis
LABELS = {
    32779: "编辑>基本信息", 32782: "编辑>城市信息", 32783: "编辑>玩家势力武将信息",
    32833: "编辑>物品>持有数目", 32835: "编辑>物品>技能信息", 32837: "编辑>物品>收纳箱状况",
    32871: "武将>织田家", 32872: "武将>魔军", 32873: "武将>武田家", 32874: "武将>北条家",
    32875: "武将>上杉家", 32876: "武将>岛津家", 32877: "武将>巫女机关", 32878: "武将>浅井朝仓家",
    32879: "武将>种子岛家", 32880: "武将>明石家", 32881: "武将>伊贺家", 32882: "武将>原家",
    32883: "武将>足利家", 32884: "武将>天志教", 32885: "武将>拓牙家", 32886: "武将>独眼流家",
    32887: "武将>今川家", 32888: "武将>德川家", 32889: "武将>毛利家", 32890: "武将>俘虏", 32891: "武将>在野武将",
    32846: "文件>取消关联", 32962: "文件>重新关联到游戏",
    32897: "战斗>战斗经过回合数保持", 32898: "战斗>敌全军濒死状态", 32899: "战斗>敌全武将濒死状态",
    32913: "战斗>敌全军兵力25%", 32914: "战斗>敌全军兵力50%", 32915: "战斗>敌全军兵力75%",
    32918: "战斗>敌全军兵力自定义", 32919: "战斗>敌武将体力25%", 32920: "战斗>敌武将体力50%",
    32921: "战斗>敌武将体力75%", 32922: "战斗>敌武将体力自定义",
    32895: "战斗>全员捕获", 32896: "战斗>全员讨死", 32927: "战斗>敌全箭头解除",
    32865: "战斗>玩家全军兵力保持最大(合战)", 32866: "战斗>玩家全武将体力保持最大(个人战)",
    32868: "战斗>玩家全武将行动次数无限", 32924: "战斗>玩家全箭头赋予",
    32848: "锁定>金钱保持900000", 32851: "锁定>每回合无限行动次数", 32852: "锁定>保持武将可行动状态",
    32853: "锁定>鬼之骨数目保持900",
    32989: "武将扩展>新武将信息", 32991: "武将扩展>追加武将信息",
    32970: "其他>全CG开启", 32971: "其他>全音乐开启", 32974: "其他>所有通关奖励开启",
    57664: "帮助>关于", 57665: "文件>退出", 59393: "视图>状态栏",
    32941: "右键>编辑所选基本信息", 32943: "右键>编辑所选物品", 32944: "右键>所有物品数目900",
    32945: "右键>编辑收纳箱所选物品", 32946: "右键>所有物品收纳", 32947: "右键>编辑所选城市",
    32948: "右键>编辑所选技能", 32950: "右键>所有技能零行动消费",
    32955: "右键>编辑所选武将(全势力)", 32956: "右键>编辑所选武将(玩家势力)",
    32976: "右键>复制所选武将到我方势力", 32978: "右键>导出所选武将到文件",
    32985: "右键>导入追加武将", 33004: "右键>导入新武将", 33005: "右键>导入新武将(全势力)",
    33006: "右键>导入追加武将(全势力)", 32994: "右键>编辑所选新武将", 32995: "右键>编辑所选追加武将",
    32999: "右键>新建武将", 33000: "右键>删除所选武将",
}

rows = []
for line in open(args.input, encoding="utf-8"):
    m = re.match(r"rdata@0x([0-9A-F]+)\s+cmdID=\s*(\d+)\.\.\s*(\d+) (.*?)\s+sig=\s*(\d+) handler=0x([0-9A-F]+)", line)
    if not m:
        continue
    va, nid, nlast, kind, sig, pfn = m.groups()
    nid = int(nid)
    if nid < 32700 and nid not in LABELS:
        continue
    kind = kind.strip()
    label = LABELS.get(nid, "?")
    rows.append((nid, int(pfn, 16), kind, label))

with open(args.output, "w", encoding="utf-8") as f:
    f.write("cmdID   handler      类型                    含义\n")
    f.write("-" * 90 + "\n")
    for nid, pfn, kind, label in sorted(rows):
        f.write(f"{nid:6d}  0x{pfn:08X}  {kind:22s} {label}\n")
print(f"{len(rows)} rows -> cmd_map.txt")
