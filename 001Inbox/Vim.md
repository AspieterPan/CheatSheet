---
Aliases: ["#Vim"]
Tags: Tool
DateCreated: 2023-06-26T03:21
DateModified: 2023-10-27T15:37
---
# Vim

## Tricks
---
![[VimCheatSheet#VimCheatSheet]]

## Config
---
### 多重配置

- https://www.youtube.com/watch?v=LkHjJlSgKZY
	- Neovim 0.9 有了一个新的特性，可以使用 NVIM_APPNAME 来快速切换不同的配置
	- 使用方法
		- 在 `~/.config` 文件夹下，将多个不同的 neovim 配置文件夹设置成不同的名字
		- 启动时，用 `NVIM_APPNAME={FOLDER_NAME} nvim` 来启动对应的文件夹中的配置
	- 在视频中，可以通过配置 `~/.zshrc` 来实现便捷操作
