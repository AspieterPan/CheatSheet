---
Aliases: 
tags: Computer/Datastructure 
DateCreated: 2023-08-22T20:47
DateModified: 2023-08-22T21:13
---
# 求 next 数组

Top :: [[Computer Datastructure]] - 第四章 - 串 - 4.2.3

```cpp
void get_nextval(String T, int nextval[]){
	int i=1, j=0;
	nextval[1]=0;
	while(i<T.length){
		if(j==0||T.ch[i]==T.ch[j]){
			++i; ++j;
		}
		else
			j = nextval[j];
	}
	if(j>T.length)
		return i-T.length;
	else
		return 0;
}
```
