---
Uid: 202305242228
Aliases: 
tags: Program/Language/Python 
From: 
---
# Python_Markdown

## QuickStart
---

Python中的Markdown模块是一个用于将Markdown格式的文本转换为HTML、LaTeX或其他格式的模块。它支持标准的Markdown语法，还提供了一些扩展功能，如表格、代码高亮、自定义标题ID等。

该模块可以通过pip安装：

```bash
pip install markdown
```

使用示例：

```python
import markdown

md_text = "# Hello, Markdown!"
html_text = markdown.markdown(md_text)
print(html_text)
```

输出结果：

```html
<h1>Hello, Markdown!</h1>
```

该模块的文档地址为：[https://python-markdown.github.io/](https://python-markdown.github.io/)

Github仓库地址为：[https://github.com/Python-Markdown/markdown](https://github.com/Python-Markdown/markdown)

## Feature
---

1. Markdown到HTML的转换：`markdown`模块可以将Markdown格式的文本转换为HTML格式。它支持常见的Markdown语法元素，如标题、段落、列表、链接、强调、代码块等。

2. 扩展支持：`markdown`模块支持通过扩展来增加对特定功能和语法的支持。例如，可以通过扩展支持表格、任务列表、删除线等扩展语法。

3. 自定义扩展：除了使用现有的扩展外，`markdown`模块还提供了自定义扩展的能力。你可以编写自己的扩展，以满足特定的需求或添加新的Markdown语法。

4. AST（抽象语法树）：`markdown`模块可以将Markdown文本解析为AST表示形式，以便以结构化的方式访问和操作文本中的各个部分。这样可以对Markdown文本进行更高级的分析和处理。

5. 代码高亮：`markdown`模块支持对代码块进行语法高亮显示。它可以根据指定的代码语言，为代码块添加适当的样式和标记，使其在转换为HTML时具有更好的可读性和可视化效果。

## Usage

1. Markdown到HTML的转换：

```python
import markdown

md_text = "# This is a heading \n\nHere is some **bold text**"
html_text = markdown.markdown(md_text)

print(html_text)
```

输出结果为：

```html
<h1>This is a heading</h1>
<p>Here is some <strong>bold text</strong></p>
```

2. 扩展支持：

```python
import markdown

md_text = "This is a table: \n\n| Column 1 | Column 2 |\n| --- | --- |\n| Row 1, Col 1 | Row 1, Col 2 |\n| Row 2, Col 1 | Row 2, Col 2 |"

html_text = markdown.markdown(md_text, extensions=['tables'])

print(html_text)
```

输出结果为：

```html
<p>This is a table:</p>
<table>
<thead>
<tr>
<th>Column 1</th>
<th>Column 2</th>
</tr>
</thead>
<tbody>
<tr>
<td>Row 1, Col 1</td>
<td>Row 1, Col 2</td>
</tr>
<tr>
<td>Row 2, Col 1</td>
<td>Row 2, Col 2</td>
</tr></tbody></table>

```

3. 自定义扩展：

```python
import markdown

class MyExtension(markdown.Extension):
    def extendMarkdown(self, md):
        # Add your custom rules here
        pass

md_text = "This is some text with my custom syntax"

html_text = markdown.markdown(md_text, extensions=[MyExtension()])

print(html_text)
```

4. AST（抽象语法树）：

```python
import markdown

md_text = "# This is a heading \n\nHere is some **bold text**"
md_ast = markdown.parse(md_text)

for item in md_ast:
    print(item)

```

输出结果为：

```
<Element 'h1' at 0x7f5c92b3f710>
'\n\n'
<Element 'p' at 0x7f5c92b3fae8>
```

5. 代码高亮：

```python
import markdown

md_text = "Here is some code: \n\n```python\n
