---
Uid: 202305242228
Aliases: Dataview
Tags: Obsidian
From: 
Priority: low
---
# Obsidian_Dataview

## Introduce 
---
Obsidian_Dataview 插件是 [[Obsidian]] 笔记应用程序的一个插件，它允许用户以各种方式查看和操作他们的笔记数据。

## Content
---
source:: https://blacksmithgu.github.io/obsidian-dataview/
- [x] Overview
- [ ] [[Obsidian_Dataview#Metadata|Metadata]]
	- [x] Adding Metadata 
	- [x] Data Types 
	- [x] Metadata on Pages 
	- [ ] Metadata on Tasks and Lists
- [ ] DQL, JS and Inlines
- [ ] Query Language Reference
	- [ ] Structure of a Query
	- [ ] Query Types
	- [ ] Data Commands
	- [ ] Differences to SQL
	- [ ] Sources
	- [ ] Expressions
	- [ ] Literals
	- [ ] Functions
- [ ] JavaScript Reference
	- [ ] Overview
	- [ ] Data Arrays
	- [ ] Codeblock Reference
	- [ ] Codeblock Examples

## Metadata
---
### Type

- String：默认
- Number: 纯数字，可以有小数点
- Boolean: true, false
- Date: 满足[ISO标准格式](https://en.wikipedia.org/wiki/ISO_8601), Date 格式的数据可以按以下方式提取
	- field.year
	- field.month
	- field.weekyear
	- field.week
	- field.weekday
	- field.day
	- field.hour
	- field.minute
	- field.second
	- field.millisecond
 
> CodeExample: gives you back all birthdays happening this month.

```obsidian_dataview
# birthday:: 2001-06-11

LIST birthday WHERE birthday.month = date(now).month 

```

- Duration: text of the form `<time> <unit>` , like `6 hours` or `4 minutes 
	- Example: 7 hours 
	- Example: 16days 
	- Example: 4min 
	- Example: 6hr7min 
	- Example: 9 years, 8 months, 4 days, 16 hours, 2 minutes 
	- Example: 9 yrs 8 min

### Adding

- [ ] 手动增加 Metadata  

- [ ] 默认 Metadata

## Source
---
- Github: https://github.com/blacksmithgu/obsidian-dataview
- 官方教程: https://blacksmithgu.github.io/obsidian-dataview/
