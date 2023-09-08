---
Aliases: 
Tags: Computer/Datastructure 
DateCreated: 2023-09-05T22:24
DateModified: 2023-09-05T22:38
---
# BFS 算法

Top :: [[Computer Datastructure]] - 第六章 - 图 - 6.4.2

## 代码实现
---

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
