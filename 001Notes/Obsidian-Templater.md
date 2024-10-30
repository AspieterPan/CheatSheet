---
Aliases: 
tags: Obsidian 
DateCreated: 2023-06-19T15:56
DateModified: 2023-08-09T17:22
---
# Obsidian-Templater
Top:: [[Obsidian]]

## Introduce
---
Obsidian 中的 Templater 插件是一个强大的自动化工具，它允许用户使用模板来生成和自定义文档。用户可以创建自己的模板，包括文本、标签和日期等，然后使用快捷命令将其插入到笔记中。Templater 还支持动态参数，可以根据需要插入不同的数值。这个插件提供了一种高效的方式来创建重复性文档和标准化笔记，提高工作效率。

> [!tldr]
> 还是要先学了 [[JavaScript]] 再来用这个插件。光看插件本身感觉现在还不需要

## Tutorial
---
Source:: https://silentvoid13.github.io/Templater/
1. Introduction
	- 1.1. Installation
	- 1.2. Terminology
	- 1.3. Syntax
		- [ ] `tp.<my_function>(arg1_name: type, arg2_name?: type, arg3_name: type = <default_value>, arg4_name: type1|type2, …)`
			- [ ] If an argument is optional, it will be appended with a question mark ?, e.g. arg2_name?: type
			- [ ] If an argument has a default value, it will be specified using an equal sign =, e.g. arg3_name: type = <default_value>.
			- [ ] If an argument can have different types, it will be specified using a pipe |, e.g. arg4_name: type1|type2
	- 1.4. Settings
	- 1.5. FAQ
2. Internal Functions
	- 2.1. tp.config
		- **tp.config.active_file**
			- The active file (if existing) when launching Templater.
		- **tp.config.run_mode**
			- The RunMode, representing the way Templater was launched (Create new from template, Append to active file, …)
		- **tp.config.target_file**
			- The TFile object representing the target file where the template will be inserted.
		- **tp.file.template_file**
			- The TFile object representing the template file.
	- 2.2. tp.date
		- **tp.date.now**(format: string = "YYYY-MM-DD", offset?: number⎮string, reference?: string, reference_format?: string)
			- `format`: Format for the date, refer to [format reference](https://momentjs.com/docs/#/displaying/format/)
			- `offset`: Offset for the day, e.g. set this to `-7` to get last week's date. You can also specify the offset as a string using the ISO 8601 format
			- `reference`: The date referential, e.g. set this to the note's title
			- `reference_format`: The date reference format.
		- **tp.date.tomorrow**(format: string = "YYYY-MM-DD")
			- `format`: Format for the date, refer to [format reference](https://momentjs.com/docs/#/displaying/format/)
		- **tp.date.weekday**(format: string = "YYYY-MM-DD", weekday: number, reference?: string, reference_format?: string)
			- `format`: Format for the date, refer to [format reference](https://momentjs.com/docs/#/displaying/format/)
			- `reference`: The date referential, e.g. set this to the note's title
			- `reference_format`: The date reference format.
			- `weekday`: Week day number. If the locale assigns Monday as the first day of the week, `0` will be Monday, `-7` will be last week's day.
		- **tp.date.yesterday**(format: string = "YYYY-MM-DD")
	- 2.3. tp.file
		- **tp.file.content**
		- **tp.file.create_ne**w(template: TFile ⎮ string, filename?: string, open_new: boolean = false, folder?: TFolder)
			- `filename`: The filename of the new file, defaults to "Untitled".
			- `folder`: The folder to put the new file in, defaults to obsidian's default location. If you want the file to appear in a different folder, specify it with `app.vault.getAbstractFileByPath("FOLDERNAME")`
			- `open_new`: Whether to open or not the newly created file. Warning: if you use this option, since commands are executed asynchronously, the file can be opened first and then other commands are appended to that new file and not the previous file.
			- `template`: Either the template used for the new file content, or the file content as a string. If it is the template to use, you retrieve it with `tp.file.find_tfile(TEMPLATENAME)`
		- **tp.file.cursor**(order?: number)
		- **tp.file.cursor_append**(content: string)
		- **tp.file.exists**(filename: string)
		- **tp.file.find_tfile**(filename: string)
		- **tp.file.folder**(relative: boolean = false)
		- **tp.file.include**(include_link: string ⎮ TFile)
		- **tp.file.last_modified_date**(format: string = "YYYY-MM-DD HH:mm")
		- **tp.file.move**(new_path: string, file_to_move?: TFile)
		- **tp.file.path**(relative: boolean = false)
		- **tp.file.rename**(new_title: string)
		- **tp.file.selection**()
		- **tp.file.tags**
		- **tp.file.title**
	- 2.4. tp.frontmatter
		- **tp.frontmatter.<frontmatter_variable_name>**
	- 2.5. tp.obsidian
		- [查看 Obsidian 官方的 API](https://github.com/obsidianmd/obsidian-api/blob/master/obsidian.d.ts)
	- 2.6. tp.system
		- **tp.system.clipboard**()
		- **tp.system.prompt**(prompt_text?: string, default_value?: string, throw_on_cancel: boolean = false, multiline?: boolean = false)
		- **tp.system.suggester**(text_items: string[] ⎮ ((item: T) => string), items: T[], throw_on_cancel: boolean = false, placeholder: string = "", limit?: number = undefined)
	- 2.7. tp.web
		- **tp.web.daily_quote**()
		- **tp.web.random_picture**(size?: string, query?: string, include_size?: boolean)
	- 2.8. Contributing
3. User Functions
	- 3.1. User Scripts
		- 每个 js 文件中只能有一个函数
		- 需要输出的时候，需要使用 return 而不是直接使用 output
		- 调用方式 `<% tp.user.my_script("Hello World!") %>`
	- 3.2. System Commands
		- 在 Obsidian 的插件设置中进行设置
		- 同样使用 `tp.user.<command name>` 来进行调用
4. Commands
	- 4.1. Dynamic Commands
		- 使用 `<%+ … %>` 来创建一个动态命令
		- 动态命令只有在当前笔记进入预览的时候才会生效
	- 4.2. Execution Commands
		- 使用 `<%* … %>` 来创建一个 js 命令
		- 可以使用 await 做一些同步
		- 通过在 `tR` 对象中增加字符串来进行输出
	- 4.3. Whitespace Control

> [!question] 如何用 Templater 来创建 Dairy?
>
