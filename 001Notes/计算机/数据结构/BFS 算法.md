---
Aliases: 
tags: 计算机/数据结构 
DateCreated: 2023-09-05T22:24
DateModified: 2024-09-30T20:57
---
# BFS 算法

Top :: [[王道 - 数据结构]] - 第六章 - 图 - 6.4.2

## 代码实现

```cpp
bool visited[MAX_VERTEX_NUM];

void BFS_MIN_Distance(Graph G, int u){
	for(int i=0;i<G.vexnum;++i){
		d[i] = INFINITY;
		path[i] = -1;
	}
	d[u]=0;
	visited[u]=TRUE;
	Enqueue(Q,u);
	while(!isEmpty(Q)){
		DeQueue(Q,u);
		for(w=FirstNeighbor(G,v)?w>=0;w=NextNeighbor(G,v,w)){
			if(!visited[w]){
				d[w]=d[u]+1;
				path[w]=u;
				visited[w]=TRUE;
				EnQueue(Q,w);
			}
		}	
	}
}
```
