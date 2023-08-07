---
Aliases: 
Tags: Computer/Compose 
DateCreated: 2023-07-24T18:05
DateModified: 2023-07-24T18:21
---
# Cache 写策略
Top:: [[Computer Compose]]

## 写命中
---
### 全写法（Write-Through）

- 当 CPU 对 Cache 写命中时，必须同时把数据写入 Cache 和主存，一般使用写缓冲（Write Buffer）
	- 写缓存: SRAM 实现的 FIFO 队列
	- Cache 中需要写入主存的内容，先放到写缓冲中，之后再异步地写回到主存中
- 访存次数增加，速度变慢
- 使用写缓冲时，如果写操作不频繁，效果很好；如果写操作很频繁，可能回发生阻塞

### 写回法（Write-Back）

- 当 CPU 对 Cache 写命中时，只修改 Cache 的内容，而不立即写入主存，只有当此块被换出时才写回主存
- 脏位（是否被修改过）
	- 为 1 时，表示被修改过，被换出时需要写回主存
 
## 写不命中
---
### 写分配法（Write-Allocate）

- 写不命中时，主存中的块调入 Cache，在 Cache 中修改
- 搭配 写回法

### 非写分配法

- 写不命中时，只写入主存，不调入 Cache
- 搭配 全写法 使用

## 多级 Cache
---
- 现代计算机采用多级 Cache
- 离 CPU 越近的速度越快，容量越小
- 各 Cache 之间使用 全写法 + 非写分配法
- Cache 到主存之间使用 写回法 + 写分配法
