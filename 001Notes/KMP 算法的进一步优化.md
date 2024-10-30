---
Aliases: 
tags: 计算机/数据结构 
DateCreated: 2023-08-22T21:13
DateModified: 2023-08-22T21:14
---
# KMP 算法的进一步优化

Top :: [[王道 - 数据结构]] - 第四章 - 串 - 4.2.3

```cpp
void get_nextval(String T, int nextval[]){
	int i=1, j=0;
	nextval[1]=0;
	while(i<T.length){
		if(j==0||T.ch[i]==T.ch[j]){
			++i; ++j;
			if(T.ch[i]!=T.ch[j])
				nextval[i] = j;
			else 
				nextval[i] = nextval[j];
		}
		else
			j = nextval[j];
	}
	if(j>T.length)
		return i - T.length;
	else
		return 0;
}
```
