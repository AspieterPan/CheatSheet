---
Aliases: 
tags: 计算机/组成原理
DateCreated: 2023-08-11T08:15
DateModified: 2023-08-14T05:30
---
# 输入输出系统和 IO 控制方式

Top :: [[王道 - 计算机组成原理]] - 第七章 - 输入输出系统 - 7.1.1

## 常见的 I/O 设备

- 鼠标、键盘——输入设备
- 显示器、打印机——输出设备
- 硬盘、光盘——既可输入、又可输出的设备

## I/O 控制器（I/O 接口）
---
- I/0 接口:
	- 又称 I/0 控制器 (I/0Controller)、设备控制器,
	- 负责协调主机与外部设备之间的数据传输
 
### CPU 如何控制键盘 I/O 的完成?

1. [[程序查询方式]]:
	- CPU 不断轮询检查 I/0 控制器中的 " 状态寄存器 ",检测到状态为 " 已完成 " 之后, 再从数据寄存器取出输入数据
2. 程序中断方式:
	- 等待键盘 I/O 时 CPU 可以先去执行其他程序,键盘 I/O 完成后 I/O 控制器向 CPU 发出中断请求,CPU 响应中断请求,并取走输入数据

## DMA 控制方式
---
- DMA 控制方式
	- DMA
		- Direct Memory Access
		- 直接内存访问
	- 主存与高速 I/0 设备之间有一条直接数据通路 (1DMA 总线)。CPU 向 DMA 接口发出 " 读/写 " 命令,并指明主存地址、磁盘地址、读写数据量等参数
	- DMA 控制器自动控制磁盘与主存的数据读写,每完成一整块数据读写 (如 1KB 为一整块),才向 CPU 发出一次中断请求。
## I/O 控制方式简介
---
![[输入输出系统和 IO 控制方式_1.png]]

## 通道控制方式
---
- 通道
	- 可以理解为是 " 弱鸡版的 CPU"。
	- 通道可以识别并执行一系列通道指令,
		- 通道指令种类、功能通常比较单一
	1. CPU 向通道发出 I/O 指令。
		1. 指明通道程序在内存中的位置,
		2. 并指明要操作的是哪个 I/O 设备。
		3. CPU 就可以去做其他事情
	2. 通道执行内存中的通道程序,控制 I/0 设备完成一系列任务
	3. 通道执行完规定的任务后,向 CPU 发出中断请求,之后 CPU 对中断进行处理
## I/O 系统基本组成
---
- 一般来说,I/0 系统由 I/0 软件和 I/0 硬件两部分构成。
	1. I/0 硬件包括外部设备、I/0 接口、I/0 总线等。
	2. I/0 软件包括驱动程序、用户程序、管理程序、升级补丁等。
		- 通常采用 I/0 指令和通道指令实现主机和 I/0 设备的信息交换。
		1. I/O 指令
			1. 操作码
			2. 命令码
			3. 设备码
		2. 通道指令
			- 通道程序提前编制好放在主存中
			- 在含有通道的计算机中,CPU 执行 I/0 指令对通道发出命令,由通道执行一系列通道指令,代替 CPU 对 I/O 设备进行管理
