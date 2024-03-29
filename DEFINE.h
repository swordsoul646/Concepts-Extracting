﻿// Common
char *path = "D:\\CEData\\"; // 数据文件夹路径

// Data_Generate
#define MULTIPULPRO 5 // 实体名重现偏向系数，1 - 1 / MULTIPULPRO的概率偏向重现
#define MULTIPULUPB1 20 // 实体名最多重现次数
#define MULTIPULUPB2 10 // 实体名较小可能最多重现次数
#define EPCUPBOUND 20 * MULTIPULUPB1 // 文档中每个概念对应的实体数上限，请注意在程序中真正的上限是该值的两倍
#define TREEUPBOUND1 5 // 树结构生成时更可能的最大合并节点数量
#define TREEUPBOUND2 12 // 树结构生成时较小可能的最大合并节点数量
#define FEWNODESPRO 3 // 树结构偏向系数，1 - 1 / FEWNODESPRO的概率偏向较小的最大合并节点数量
#define COST 10 // 概念的标注代价最大值

// 0-1 Pack
#define LIMIT 50 // 背包问题的最大背包容量