---
Aliases: 
tags: 计算机/数据结构 
DateCreated: 2023-08-22T20:32
DateModified: 2023-12-12T08:32
---
# KMP 算法

Top :: [[王道 - 数据结构]] - 第四章 - 串 - 4.2.2

## 字符串的前缀、后缀和部分匹配值
---
- 前缀、后缀和部分匹配值。
	- 前缀
		- 指除最后一个字符以外,字符串的所有头部子串;
	- 后缀
		- 指除第一个字符外,字符串的所有尾部子串:
	- 部分匹配值
		- 字符串的前缀和后缀的最长相等前后缀长度

## KMP 算法
---
- 当字符不匹配 的时候，指向子串当前匹配的指针
	- 向后移动的位数 = 已匹配的字符数 - 对应的部分匹配值
- 根据模式串 T，求出 next 数组
	- 利用 next 数组进行匹配
	- 主串指针不回溯

```cpp
int Index_KMP(SString S, SString T, int next[]){
	int i=1, j=1;
	while(i<=S.length && j <= T.length){
		if(j==0||S.ch[i] == T.ch[j]){
			++i;
			++j;
		}
		else
			j = next[j];
	}
	if(j>T.length)
		return i-T.length;
	else
		return 0;
}
```

## [[求 next 数组]]
---

## [[KMP 算法的进一步优化]]
---
