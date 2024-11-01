---
tags: 计算机/网络
DateCreated: 2024-09-30T23:23
DateModified: 2024-09-30T23:38
---
Super:: [[计算机网络]]

# ICMP

Internet Control Message Protocol, 互联网控制消息协议

主要用于在主机和路由器之间传递控制信息和报告网络状况

通常与 [[IP]] 协议一起使用

但 ICMP 本身并不是用于传输数据的, 而是用于报告网络层的错误和提供简单的网络诊断

- 主要功能
	- 错误报告
		- 目标不可达 ( Destination Unreachable)
		- 超时 (Time Exceeded)
		- 源抑制 (Source Quench)
		- 重定向 (Redirect)
	- 网络诊断
		- [[Ping]]
		- [[Traceroute]]
			- 追踪数据包经过的路由路径, 显示中间各个中间路由器的地址

- 报文格式
	- 类型 (Type):
		- 标识 ICMP 报文的类型, 如回显请求, 回显应答, 目的地不可达等
	- 代码 (Code):
		- 进一步细分报文的具体情况. 例如 , 目的地不可达的报文类型中, 有不同的代码表示网络不可达 , 主机不可达等
	- [[校验和]] (Checksum):
		- 用于检查 ICMP 报文在传输中是否出现错误.
	- 数据部分

- 特点
	- 不可靠
		- 只报告网络问题, 不负责解决问题, 也没有重传机制
	- 无连接
		- 独立发送, 不维持连接状态
	- 自动生成
		- 通常由网络设备 (如路由器) 或主机的 IP 协议栈自动生成, 用户应用程序不直接生成 ICMP 消息
