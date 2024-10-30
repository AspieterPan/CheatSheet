---
Uid: 202305242228
Aliases: 
tags: Cheatsheet
From: 
---
# MarkdownCheatSheet

## 表格
---

| head | Describtion |
| ---- | ----------- |
| h1   | d1          |
| h2   | d2          |

## Footnotes
---

在Markdown中，你可以使用以下方法生成脚注（footnotes）：

1. 使用脚注标记：在你希望添加脚注的文本后面加上一个脚注标记。脚注标记由一个脚注号码（如[^1]）和相应的脚注内容组成。

2. 定义脚注内容：在文档的其他地方，添加与脚注标记相对应的脚注内容。脚注内容应该以相同的脚注号码开始，后面接一个冒号和具体的脚注解释。

下面是一个示例：

```markdown
这是一个带有脚注的句子。[^1]

[^1]: 这是一个脚注的解释。
```

在上述示例中，句子后面的`[^1]`是脚注标记，而`[^1]: 这是一个脚注的解释。`是脚注内容。当你在Markdown中使用这些标记时，生成的HTML将会包含相应的脚注链接和解释。