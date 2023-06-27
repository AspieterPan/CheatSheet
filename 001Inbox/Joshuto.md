---
Uid: 202305242228
Aliases: 
Tags: Tool
From: 
Priority: 
---
# Joshuto

## Introduce 
---
一个终端下的文件管理工具，除了让人能够像 Finder 那样可视地在终端下寻找文件意外，还提供了一些类似 Vim 的快捷操作

功能跟 Ranger 一样，是用 Rust 重写的软件，因此相比 Ranger 拥有更高的性能

## Install 
---
### Mac 下的安装

1. 用 HomeBrew 安装 Rust， 同时会自动安装 Rust 的包管理工具 Cargo

```bash
brew install rust
```

2. 下载 Joshuto 的 git 仓库，[https://github.com/kamiyaa/joshuto](https://github.com/kamiyaa/joshuto)

```bash
git clone git@github.com:kamiyaa/joshuto.git
```

3. 本地进入到 Joshuto 的仓库，执行 Cargo 的安装命令

```bash
sudo cargo install --path=. --force --root=/usr/local
```

## Config
---
> [!error]
> 修改 config 文件后，并没有生效 

#Todo 

## Resource
---
- [theCW 的入门视频](https://www.bilibili.com/video/BV1Zo4y1G7QZ/?spm_id_from=333.337.search-card.all.click&vd_source=87dfd9b43712abc331544c4820fa4a87)
- [Github 仓库](https://github.com/kamiyaa/joshuto)

