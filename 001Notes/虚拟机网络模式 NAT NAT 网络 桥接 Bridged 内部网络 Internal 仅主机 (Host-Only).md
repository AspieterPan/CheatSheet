---
Aliases: 
tags: Reading
Via: https://www.bilibili.com/video/BV11M4y1J7zP
DateCreated: 2023-07-18T16:09
DateModified: 2023-07-18T17:14
---
# 虚拟机网络模式 NAT NAT 网络 桥接 Bridged 内部网络 Internal 仅主机 (Host-Only)

## NAT
---
1. 在虚拟机会有一个 DHCP 服务器
	1. DHCP 服务器 是一种网络协议，它可以自动分配 IP 地址和子网掩码给客户机。
	2. DHCP 服务器 和 网关 默认为 10.0.2.2
2. DHCP 服务器给虚拟机分配一个私有地址
	1. 默认为 10.0.2.15
	2. 每一台虚拟机都有同样的虚拟地址
	3. 虚拟机之间不能互通
	4. 同时宿主也不能 Ping 虚拟机
3. 虚拟机的数据出去经过网关的时候，会对数据包进行改写，变得像在宿主环境里生成的
	1. 宿主的数据发送到公网上同样需要一次 NAT
	2. 所以虚拟机里的网络数据会经过两次 NAT
 
## NAT 网络
---
1. 在虚拟机前加了一台虚拟的交换机
2. 虚拟机之间可以互通
	1. 虚拟机之间 MAC 地址不能一样

## 桥接网卡
---
Bridged Adapter

1. 把虚拟机放在和宿主同级的网络环境里
	1. 宿主从哪个 DHCP 服务器里得到 IP 地址的，虚拟机一样从那里获取
	2. 会消耗宿主所在局域网的 IP 地址
2. 虚拟机之间以及跟宿主可以互通

## 内部网络
---
Internal

1. 只能虚拟机之间互通，不能 ping 宿主，也不能联网
2. VirtualBox 默认不提供 DHCP 服务器，需要手动设置静态 IP 地址
	1. 在宿主机中，netplan 下的 yaml 文件中添加 `optional: true`
	2. 在虚拟机中，同样的文件中，添加 "optional"，以及 `addresses: [172.16.0.5/24]`，其中 IP 地址自己选
	3. 重启虚拟机

```bash
sudo vim /etc/netplan/00-installer-config.yaml # 在此文件下添加 "ooptional: true"，以及 "addresses: [172.16.0.5/24]"(其中IP地址为手动设置的静态地址)
```

## 仅主机
---
Host-Only

1. 有 DHCP 服务器分配地址，但是不能访问网络（没有网关）
	1. 可以访问虚拟网卡的地址
2. 宿主可以访问虚拟机

## 对比表格
---

|                            | 虚拟机 -->虚拟机 | 虚拟机 -->宿主 | 宿主 -->虚拟机 | 虚拟机 -->互联网 | 互联网 -->虚拟机 |
| -------------------------- | ---------------- | -------------- | -------------- | ---------------- | ---------------- |
| 网络地址转换 NAT           | ❌               | ✅             | ❌             | ✅               | ❌               |
| NAT 网络                   | ✅               | ✅             | ❌             | ✅               | ❌               |
| 桥接网卡 (Bridged Adapter)  | ✅               | ✅             | ✅             | ✅               | ✅               |
| 内部网络 (Internal Network) | ✅               | ❌             | ❌             | ❌               | ❌               |
| 仅主机                     | ✅               | ✅             | ✅             | ❌               | ❌                 |

## 用到的一些命令
---

```bash
hostname -I # 查看自己的 IP 地址
ipconfig getifaddr en0 # Mac 上获取自己 IP 地址
```
