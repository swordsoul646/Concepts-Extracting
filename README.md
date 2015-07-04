# Concepts-Extracting
2015北大信科数据库实验班创新项目。

主要目标是对sigmod14论文《Which Concepts Are Worth Extracting》中描述的算法进行分析和重现，并尝试改进。

## 创新项目组成员
+ 1200012749 智天成
+ 1200012897 吴恺东

## 主要工作分配
+ 智天成：算法设计、算法实现
+ 吴恺东：随机数据生成、测试验证

## 工作环境
本项目的工程为Concepts-Extracting，工作环境为Win7/8下的Visual Studio 2012，主要使用C++语言。

## 代码结构
代码大体分为三大部分：随机数据生成部分、算法部分和测试验证部分。
+ 随机数据生成部分：子项目Data_Generate。用户输入概念数、实体数和查询数，随机生成一份包括文档、查询和概念包含关系树结构的数据。
+ 算法部分：子项目0-1 Pack和子项目sa。0-1 Pack实现了论文中提出的近似算法，用户输入Data_Generate生成的数据集编号，输出结果到同一文件夹下。sa是模拟退火算法，分别在论文提出的和自己构造的模型下求解。输入输出同于0-1 Pack。注意会生成两个文件，XXXSa0.out和XXXSa1.out。
+ 测试验证部分：子项目TestTree。用户选择已经经过求解的数据集，程序输出在对这些概念进行标记的情况下查询的准确率。
