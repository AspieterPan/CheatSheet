---
Uid: 202305242228
Aliases: Callout
Tags: Obsidian 
From: https://help.obsidian.md/Editing+and+formatting/Callouts
Priority: 
---
# Obsidian_Callout

## Introduce 
---
类似于 飞书 的高亮块

Example:

> [!NOTE] Title
> Contents

## Grammer

- 普通版

```md
> [!note] Title
> Content
```

> 其中 note 可以替换为其他单词，会呈现不一样的卡片样式，详见此卡片 [[Obsidian_Callout#Type|Type]] 部分

- 折叠版

在`[!note]`的后面加上一个减号 `-`

```md
> [!note]- Title
> Content
```

> 需要注意的是，减号 `-` 跟前面的`[!note]`没有空格，跟后面的 Title 有空格

## Type
---
- note
- abstract, summary, tldr
- info, todo
- tip, hint, important
- success, check, done
- question, help, faq
- warning, caution, attention
- failure, fail, missing
- danger, error
- bug
- example
- quote, cite

## Customizations
---
Snippets and plugins can define custom callouts, too, or overwrite the default options. Callout types and icons are defined in CSS, where the color is an `r, g, b` tuple and the icon is the icon ID From any internally supported icon (like `lucide-info`). Alternatively, you can specify an SVG icon as a string.

```CSS
.callout[data-callout="my-callout-type"] {
    --callout-color: 0, 0, 0;
    --callout-icon: icon-id;
    --callout-icon: '<svg>...custom svg...</svg>';
}
```
