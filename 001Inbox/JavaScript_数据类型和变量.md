---
Uid: 202305242228
Aliases: 
Tags: Program/Language/JavaScript 
---
# JavaScript_数据类型和变量
Top:: [[Javascript]]

## Number
---
JavaScript不区分整数和浮点数，统一用Number表示，以下都是合法的Number类型：

```js
123; // 整数123
0.456; // 浮点数0.456
1.2345e3; // 科学计数法表示1.2345x1000，等同于1234.5
-99; // 负数
0xff00 // 16进制
NaN; // NaN表示Not a Number，当无法计算结果时用NaN表示
Infinity; // Infinity表示无限大，当数值超过了JavaScript的Number所能表示的最大值时，就表示为Infinity
```

### Number 的四则运算

```js
1 + 2; // 3
(1 + 2) * 5 / 2; // 7.5
2 / 0; // Infinity
0 / 0; // NaN
10 % 3; // 1 (%代表取余运算)
10.5 % 3; // 1.5
```

## 字符串
---
> 详细介绍看 [[JavaScript_字符串]]

字符串是以单引号'或双引号"括起来的任意文本，比如`'abc'`，`"xyz"`等等。请注意，`''`或`""`本身只是一种表示方式，不是字符串的一部分，因此，字符串`'abc'`只有`a`，`b`，`c`这3个字符。

## 布尔值
---
布尔值和布尔代数的表示完全一致，一个布尔值只有`true`、`false`两种值，要么是`true`，要么是`false`，可以直接用`true`、`false`表示布尔值，也可以通过布尔运算计算出来：

```js
true; // 这是一个true值
false; // 这是一个false值
2 > 1; // 这是一个true值
2 >= 3; // 这是一个false值
```

### `&&` 运算
与运算，只有所有都为`true`，`&&`运算结果才是`true`：

```js
true && true; // 这个&&语句计算结果为true
true && false; // 这个&&语句计算结果为false
false && true && false; // 这个&&语句计算结果为false
```

### `||` 运算
或运算，只要其中有一个为`true`，`||`运算结果就是`true`：

```js
false || false; // 这个||语句计算结果为false
true || false; // 这个||语句计算结果为true
false || true || false; // 这个||语句计算结果为true
```

### `!` 运算
非运算，它是一个单目运算符，把`true`变成`false`，`false`变成`true`：

```js
! true; // 结果为false
! false; // 结果为true
! (2 > 5); // 结果为true
```

## 比较运算符
---
```js
2 > 5; // false
5 >= 2; // true
7 == 7; // true
```

### 相等运算符  ==

要特别注意相等运算符 \==。JavaScript在设计时，有两种比较运算符：
第一种是 \== 比较，它会自动转换数据类型再比较，很多时候，会得到非常诡异的结果；
第二种是 \=\== 比较，它不会自动转换数据类型，如果数据类型不一致，返回`false`，如果一致，再比较。
由于JavaScript这个设计缺陷，不要使用\==比较，始终坚持使用\=\== 比较。

### NaN 特殊判断

另一个例外是`NaN`这个特殊的Number与所有其他值都不相等，包括它自己：

```js
NaN === NaN; // false
```

唯一能判断`NaN`的方法是通过`isNaN()`函数：

```js
isNaN(NaN); // true
```

### null和undefined

`null`表示一个“空”的值，它和`0`以及空字符串`''`不同，`0`是一个数值，`''`表示长度为0的字符串，而`null`表示“空”。

在其他语言中，也有类似JavaScript的`null`的表示，例如Java也用`null`，Swift用`nil`，Python用`None`表示。但是，在JavaScript中，还有一个和`null`类似的`undefined`，它表示“未定义”。

JavaScript的设计者希望用`null`表示一个空的值，而`undefined`表示值未定义。事实证明，这并没有什么卵用，区分两者的意义不大。大多数情况下，我们都应该用`null`。`undefined`仅仅在判断函数参数是否传递的情况下有用。

## 数组
---

```js
[1, 2, 3.14, 'Hello', null, true]; // 推荐用此方法
new Array(1, 2, 3); // 创建了数组[1, 2, 3]
```

```js
var arr = [1, 2, 3.14, 'Hello', null, true];
arr[0]; // 返回索引为0的元素，即1
arr[5]; // 返回索引为5的元素，即true
arr[6]; // 索引超出了范围，返回undefined
```

## 对象
---
JavaScript的对象是一组由键-值组成的无序集合，例如：

```js
var person = {
    name: 'Bob',
    age: 20,
    tags: ['js', 'web', 'mobile'],
    city: 'Beijing',
    hasCar: true,
    zipcode: null
};

person.name; // 'Bob'
person.zipcode; // null
```

## 变量
---

```js
var a; // 申明了变量a，此时a的值为undefined
var $b = 1; // 申明了变量$b，同时给$b赋值，此时$b的值为1
var s_007 = '007'; // s_007是一个字符串
var Answer = true; // Answer是一个布尔值true
var t = null; // t的值是null
```

## strict模式
---

> [!important] 不要忘记加上 `Var`
> JavaScript在设计之初，为了方便初学者学习，并不强制要求用var申明变量。这个设计错误带来了严重的后果：如果一个变量没有通过var申明就被使用，那么该变量就自动被申明为全局变量：
> 
> `i = 10; // i现在是全局变量`
> 
> 在同一个页面的不同的JavaScript文件中，如果都不用var申明，恰好都使用了变量i，将造成变量i互相影响，产生难以调试的错误结果。
> 
> 使用var申明的变量则不是全局变量，它的范围被限制在该变量被申明的函数体内（函数的概念将稍后讲解），同名变量在不同的函数体内互不冲突。

为了修补JavaScript这一严重设计缺陷，ECMA在后续规范中推出了strict模式，在strict模式下运行的JavaScript代码，强制通过`var`申明变量，未使用`var`申明变量就使用的，将导致运行错误。

启用strict模式的方法是在JavaScript代码的第一行写上：

```js
'use strict';
```

这是一个字符串，不支持strict模式的浏览器会把它当做一个字符串语句执行，支持strict模式的浏览器将开启strict模式运行JavaScript。