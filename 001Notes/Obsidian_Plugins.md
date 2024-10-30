---
Aliases: 
tags: Obsidian 
DateCreated: 2023-05-28T01:04
DateModified: 2024-06-05T21:37
---
# Obsidian_Plugins

Super:: [[Obsidian]]

> [!note] Obsidian 插件开发者文档
> 要自己开发插件的话，可以看看这个 Obsidian 官方的 [开发者文档](https://docs.obsidian.md/Home)  
> 但是需要先了解 [[JavaScript]]
## Link
---
- [x] Sidekick
	- 当前笔记中有一些文字/短语，如果也是其他笔记的标题，则会加上阴影和下划线,
	- 当你单击它的时候，就会弹出标签和双链（如果你之前有建立相关的笔记或者标签的话）
	- p.s 社区中没有找到这个插件
- [ ] Auto Link Title
	- 粘贴链接的时候，会自动把链接显示成对应网页的名字

## Footnote
---
- Footnote Shortcut
	- 快速添加脚注
- [x] Tidy Footnote(using [[Obsidian-Linter]] auto adjust footnote sequence on save)
	- 快速整理脚注顺序
 
## Quick
---
- [ ] Advanced URI
	- 通过 [[Obsidian]] 的链接来执行一些快速指令
 - [ ] [[Obsidian-Templater]]
	 - 通过插入模板来执行一些 [[JavaScript]] 代码
 - [ ] [[Obsidian_QuickAdd]]
	 - 可以创建一些快捷指令
	 - 可以与 [[Obsidian-Templater]] 联动
 - [ ] [Obsidian Meta Bind Plugin](https://github.com/mProjectsCode/obsidian-meta-bind-plugin?tab=readme-ov-file)
	- Inline input fields, metadata displays, and buttons.

## Memory
---
- Spaced Repetition
	- [[Obsidian]] 中原生的间隔复习
	- p.s 但是会影响 [[Obsidian]] 中的笔记，会倾向于使用 Anki 来进行复习
	- 更新：试用了一下，很爽，就它了

## Web
---
- [Surfing](https://github.com//PKM-er/Obsidian-Surfing)
	- 在 [[Obsidian]] 中打开网页
- Media Extended
	- 可以在 Obsidian 内打开视频、录音，也可以直接打开网页上的视频
	- 可以获取当前媒体的时间戳
	- bug: 笔记中的链接需要在 Reading View 中点击才会直接在 Obsidian 内打开，而打开的视频在笔记切换 Reading/Editing View 时会出现严重的扰乱视觉的 bug
	- bug 追记：把链接放到 Obsidian 的 Callout 内，可以在 Editing View 下直接打开链接，从而避免切换 View 带来的 Bug

## Heading
---
- Zoom
	- 像 [[Remnote]] 那样 Zoom 到一个 bullet 里面.

## Block
---
- [ ] Obsidian_Pseudocode
	- 插入伪代码风格的代码块
	- [介绍文章](https://zhuanlan.zhihu.com/p/616961412)
- Obsidian_MermaidTools
	- 快速插入各种 [[Mermaid]] 语句
	- 提供可视化的控件，并且可以自己设定控件

## Project
---
- [Obsidian_Projects](https://github.com/marcusolsson/obsidian-projects)
	- [BUG] 识别的 tag 属性必须是 "tags" 而不能是 "Tags"
