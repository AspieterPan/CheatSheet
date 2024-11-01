---
Aliases: 
tags: 计算机/组成原理 
DateCreated: 2023-07-11T22:14
DateModified: 2023-07-12T14:54
---
# 双端口 RAM 和多模块存储器
Top:: [[王道 - 计算机组成原理]]

![[存储器读写的存取周期.excalidraw]]

> 注:DRAM 芯片的恢复时间比较长,有可能是存取时间的几倍 (SRAM 的恢复时间较短)

> [!question] 多核 CPU 都要访存,怎么办?
>

> [!question] CPU 的读写速度比主存快很多, 主存恢复时间太长怎么办?
>

- 提升主存速度
	- 双端口 RAM
	- 多模块存储器
		- 单体多字存储器
		- 多体并行存储器
			- 高位交叉编址
			- 低位交叉编址
	- 实际应用：如何让你的电脑变成 " 双通道内存 "？

## 双端口 RAM
---
![[双端口 RAM.excalidraw]]

> 作用: 优化多核 CPU 访问一根内存条的速度

需要有两组完全独立的数据线、地址线、控制线。CPU、 RAM 中也要有更复杂的控制电路

两个端口对同一主存操作有以下 4 种情况:
1. 两个端口同时对不同的地址单元存取数据。✅
2. 两个端口同时对同一地址单元读出数据。✅
3. 两个端口同时对同一地址单元写入数据。☹️ 写入错误
4. 两个端口同时对同一地址单元,一个写入数据,另一个读出数据 ☹️ 读出错误

解决方法: 置 " 忙 " 信号为 0,
由判断逻辑决定暂时关闭一个端口 (即被延时),未被关闭的端口正常访问,被关闭的端口延长一个很短的时间段后再访问。

## 多体并行存储器
---
可理解为 " 四根内存条 "

### 高位交叉编址的多体存储器

- 用每个存储单元的最高地址的部分来区分不同的 " 内存条 "

### 低位交叉编址的多体存储器

- 用最低地址来区分

连续访问地址的时候，低位交叉编址会高效得多
而实际应用中，连续访问地址的场景经常出现

采用 " 流水线 " 的方式并行存取 (宏观上并行,微观上串行)
宏观上,一个存储周期内,m 体交叉存储器可以提供的数据量为单个模块的 m 倍。

存取周期为 T, 存取时间为 r,为了使流水线不间断,应保证模块数 $m\geq\frac{T}{r}$
$m= \frac{T}{r}$ 的时候效率最高

- 多体并行存储器
	- 每个模块都有相同的容量和存取速度。
	- 各模块都有独立的读写控制电路、地址寄存器和数据寄存器。
	- 它们既能并行工作,又能交叉工作。
- 单体多字存储器
	- 每个存储单元在储 m 个字
	- 总线宽度也为 m 个字
	- 一次并行读出 m 个字
	- 每次只能同时取 m 个字,不能单独取其中某个字
	- 指令和数据在主存内必须是连续存放的
