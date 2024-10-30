---
aliases: 
tags:
  - 计算机/组成原理
DateCreated: 2023-08-02T22:18
DateModified: 2024-07-16T22:00
---
# AT&T 格式和 Intel 格式
Top:: [[王道 - 计算机组成原理]] - 第四章 - 指令系统 - 4.3.3

- AT&T
	- 源操作数在左，目的操作数在右
	- 寄存器之前必须要加 "%"
	- 立即数之前必须加 "$"
	- 主存地址用小括号 `()` 而非中括号 `[]`
	- 指令后加 b、w、l 分别表示读写长度为 byte、word、dword
	- 偏移量加在括号之前
		- `movl -8(%ebx), %eax`
			- 偏移量 (基址)
		- `movl 4(%ebx, %ecx, 32), %eax`
			- 偏移量 (基址，变址，比例因子)
			- 对应的 Intel 风格为
				- `mov eax, [ebx + ecx*32 + 4]`
