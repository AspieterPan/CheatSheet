---
Aliases: 
Tags: Computer/Datastructure 
DateCreated: 2023-09-05T22:26
DateModified: 2023-09-08T14:47
---
# Floyd 算法

Top :: [[Computer Datastructure]] - 第六章 - 图 - 6.4.4

## 算法思想
---
- 求出每一对顶点之间的最短路径
	- 使用动态规划思想, 将问题的求解分为多个阶段
		- 对于 n 个顶点的图 G,求任意一对顶点 Vi->Vj 之间的最短路径可分为如下几个阶段:
		- 初始:
			- 不允许在其他顶点中转,最短路径是?
		- 0:
			- 若允许在 Vo 中转,最短路径是?
		- 1:
			- 若允许在 Vo、V1 中转,最短路径是?
		- 2:
			- 若允许在 Vo、V1、V2 中转,最短路径是?
		- …
		- n-1:
			- 若允许在 Vo、V1、V2…….Vn-1 中转,最短路径是?
![[Floyd 算法_1.png]]