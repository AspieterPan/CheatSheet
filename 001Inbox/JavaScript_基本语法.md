---
Uid: 202305242228
Aliases: 
tags: Program/Language/JavaScript
Via: https://www.liaoxuefeng.com/wiki/1022910821149312/1023442583285984
---
# JavaScript_基本语法

> [!note]
> JS 中每个语句以 `;` 结尾，但是不强制，但是不推荐不写

## 赋值

```js
var x = 1;
```

## 字符串

```js
'Hello, world';
```

## 一行可以有多个语句（但是不推荐）

```js
var x = 1; var y = 2; // 不建议一行写多个语句!
```

## 判断

```js
if (2 > 1) {
    x = 1;
    y = 2;
    z = 3;
}
```

## 嵌套

```js
if (2 > 1) {
    x = 1;
    y = 2;
    z = 3;
    if (x < y) {
        z = 4;
    }
    if (x > y) {
        z = 5;
    }
}
```

## 单行注释

```js
// 这是一行注释
alert('hello'); // 这也是注释
```

## 多行注释

```js
/* 从这里开始是块注释
仍然是注释
仍然是注释
注释结束 */
```