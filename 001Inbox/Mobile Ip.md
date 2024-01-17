---
Aliases: 移动IP
tags: Computer/Network 
Via: https://www.bilibili.com/video/BV19E411D78Q/?p=58
DateCreated: 2022-12-04T00:32
DateModified: 2023-07-10T22:42
sr-due: 2023-08-24
sr-interval: 45
sr-ease: 265
---
# Mobile Ip

## Introduce
---
移动设备由于 " 居无定所 "，所以使用的移动 IP 跟普通的 IP 有一定区别

1. 首先，移动 IP 有一个固定的 [[Home Agent]]（就像人的家一样）
2. 移动 IP 每到一个地方，都会在新地方的 [[Foreign Agent]] 上登记一下，并把当前地址告诉给 [[Home Agent]]（就像人在外面旅游，会在旅馆里登记，并且还会把当前住的地址告诉给家里人）
3. 当其他主机想找该移动 IP 的时候，首先会问它的 [[Home Agent]]，得到移动 IP 当前的 " 住所 "，然后去 [[Foreign Agent]] 把消息实际传递给 移动 IP

## Relation
---
- [[Home Agent]]
	- stores information about mobile nodes whose permanent home address is in the home agent's network. The [[Home Agent|HA]] acts as a router on a [[Mobile Host]]'s (MH) home network which tunnels datagrams for delivery to the [[Mobile Host|MH]] when it is away From home, maintains a location directory (LD) for the [[Mobile Host|MH]].
- [[Foreign Agent]]
	- stores information about mobile nodes visiting its network. Foreign agents also advertise care-of addresses, which are used by [[Mobile Ip]]. if there is no foreign agent in the host network, the mobile device has to take care of getting an address and advertising that address by its own means. The Fa acts as a router on a [[Mobile Ip|MH]]'s visited network which provides routing services to the [[Mobile Ip|MH]] while registered. FA tunnels and delivers datagrams to the [[Mobile Ip|MH]] that were tunneled by the [[Mobile Ip|MH]]'s [[home agent|HA]]
