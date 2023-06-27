---
Uid: 202305242228
Aliases: 
Tags: 
---
# KaTeX
Top:: [[LaTeX]]

## Introduce 
---
在网页上使用 [[LaTeX]] 显示数学公式的时候，并不需要用到 [[LaTeX]] 的排版功能
[KaTeX](https://katex.org/)是这样一个支持HTML的轻量级的数学公式引擎，它由[Khan Academy](https://www.khanacademy.org/)开发，使用起来也非常简单。

## QuickStart 
---
第一步，引入KaTeX的JS代码与CSS样式：

```
<link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/katex@0.10.1/dist/katex.min.css">
<script defer src="https://cdn.jsdelivr.net/npm/katex@0.10.1/dist/katex.min.js"></script>
```

第二步，通过一个简单的JS调用就可以正确渲染出数学公式：

```
katex.render("x=\\frac{-b\\pm\\sqrt{b^2-4ac}}{2a}", document.getElementById("math"));
```

## Tutorial 
---
- 廖雪峰的官方网站_[使用KaTeX渲染数学公式](https://www.liaoxuefeng.com/article/1280024328011810)