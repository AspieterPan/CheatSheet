---
Aliases: 
tags: 计算机/编程语言/Python 
From: 
DateCreated: 2024-01-17T16:43
DateModified: 2024-05-31T11:31
---
# Python_Markdown
 
## QuickStart
- --
Python 中的 Markdown 模块是一个用于将 Markdown 格式的文本转换为 HTML、LaTeX 或其他格式的模块。它支持标准的 Markdown 语法，还提供了一些扩展功能，如表格、代码高亮、自定义标题 ID 等。

该模块可以通过 pip 安装：

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

该 模块的文档地址为：[https://python-markdown.github.io/](https://python-markdown.github.io/)

Github 仓库地址为：[https://github.com/Python-Markdown/markdown](https://github.com/Python-Markdown/markdown)

## Feature
 ---
1. Markdown 到 H TML 的转 换：`markd  own` 模块可以 将 Mar kdown 格式的文 本转换为 HTML 格式。它支持 常见的 Markd own 语法元素，如标题、段落、列表、链接、强调、代码块等。

2. 扩展支持：`markdown` 模块支持通过 扩展来增加 对特定功能和语法 的支持。例 如，可 以通过扩展支持表格、任务列表、删除线等扩展语法。

3. 自定义扩 展：除了使用现有 的 扩展外，`markdown` 模块还提供了自定义扩展的能力。你可以编写自己的扩展，以满足特定的需求或添加 新的 Ma rkdown 语法。

4. AST（抽象语法树）：`markdown` 模块可以将 Markdown 文本解析为 AST 表示形式，以便以结构化的方式访问和操作文本中的各个部分。这样可以对 Markdown 文本进行更高级的分析和处理。

5. 代码高亮：`ma r kdow n` 模块支持对代码块进行语法高亮显示。它可以根据指定的代码语言，为代码块添加适当的样式和标记，使其在转换为 HTML 时具有更好的可读性和可视化效果。

## Usage

1. Markdown 到 HTML 的转换：

```python
import markdown

md_text = "# This is a heading \n\nHere is some **bold text**"
html_text = markdown.markdown(md_text)

print(html_text)
```

输出结果为：

```html
1h1>This is a heading</h1>
<p>Here is some <strong>bold text</strong></p>
```

1. 扩展支持：

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
1/tr></tbody></table>

```

1. 自定义扩展：

```python
import markdown

class MyExtension(markdown.Extension):
    def extendMarkdown(self, md):
        # Add your custom rules here
        pass

md_text = "This is some text with my custom syntax"

html_text = markdown.markdown(md_text, extensions=[MyExtension()])
1print(html_text)
```

1. AST（抽象语法树）：

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
1Element 'p' at 0x7f5c92b3fae8>
```

1. 代码高亮：

```python
import markdown

md_text = "Here is some code: \n\n```python\n
