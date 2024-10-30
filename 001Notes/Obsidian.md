---
Aliases: ["#Obsidian"] 
tags: 
DateCreated: 2023-05-27T01:23
DateModified: 2024-06-05T21:36
---
# Obsidian

## Feature
---

[[Obsidian_Callout]]

### Metadata

Obsidian 中可以在笔记最前面用 [[Yaml]] 语法加上 Metadata

另外也可以在笔记中间用 [Property:: Anything] 来添加 Metadata（但是我不太确定后面这种语法是 Obsidian 原生的还是 Dataview 插件加上去的，不过按照现在大部分插件都离不开 Dataview 的情况，都没差啦）

### Search

| Search operator | Description                                                                                                                                                                                                                  |
| --------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `file:`         | Find text in filename. Matches any file in the vault.<br><br>Example: `file:.jpg` or `file:202209`.                                                                                                                          |
| `path:`         | Find text in file path. Matches any file in the vault.<br><br>Example: `path:"Daily notes/2022-07"`.                                                                                                                         |
| `content:`      | Find text in file content.<br><br>Example: `content:"happy cat"`.                                                                                                                                                            |
| `match-case:`   | Case-sensitive match.<br><br>Example: `match-case:HappyCat`.                                                                                                                                                                 |
| `ignore-case:`  | Case-insensitive match.<br><br>Example: `ignore-case:ikea`.                                                                                                                                                                  |
| `tag:`          | Find tag in file.<br><br>Example: `tag:#work`.<br><br>**Note**: Since `tag:` ignores matches in code blocks and in non-Markdown content, it's often faster and more accurate than a normal full-text search for `#work`.     |
| `line:`         | Find matches on the same line.<br><br>Example: `line:(mix flour)`.                                                                                                                                                           |
| `block:`        | Find matches in the same block.<br><br>Example: `block:(dog cat)`.<br><br>**Note**: Since `block:` requires Search to parse the Markdown content in every file, it can cause your search term to take longer time to finish. |
| `section:`      | Find matches in the same section (text between two headings).<br><br>Example: `section:(dog cat)`.                                                                                                                           |
| `task:`         | Find matches in a [task](https://help.obsidian.md/Editing+and+formatting/Basic+formatting+syntax#Task%20lists) on a block-by-block basis.<br><br>Example: `task:call`.                                                       |
| `task-todo:`    | Find matches in an *uncompleted* [task](https://help.obsidian.md/Editing+and+formatting/Basic+formatting+syntax#Task%20lists) on a block-by-block basis.<br><br>Example: `task-todo:call`.                                   |
| `task-done:`    | Find matches in a *completed* [task](https://help.obsidian.md/Editing+and+formatting/Basic+formatting+syntax#Task%20lists) on a block-by-block basis.<br><br>Example: `task-done:call`.                                      |

Child:: [[Obsidian_Plugins]]


## Resource
---
- Bilibili_[Johnny学](https://space.bilibili.com/432408734)
	- 非常硬核的 Obsidian 教程
 - [PKMER](https://pkmer.cn/)
	 - 超强的 Obsidian 学习社区，但不只 Obsidian
