---
Uid: 202305242228
aliases:
  - js
  - Js
tags:
  - 计算机/编程语言
---
# JavaScript

## QuickStart 
---
JavaScript 是一种动态的、轻量级的编程语言，常用于为网站添加交互性和动态效果。以下是 JavaScript 快速入门的步骤：

1. 编写 HTML 页面：在文本编辑器中创建一个 HTML 文件，并包含必要的页面标记和元素。

2. 在 HTML 页面中添加 JavaScript：使用 `<script>` 标记将 JavaScript 代码嵌入到 HTML 文件中。

3. 学习基础语法：了解变量、数据类型、运算符和控制流程等基础概念。

4. 学习函数：学习如何定义和调用函数，并了解作用域和闭包等概念。

5. 掌握 DOM 操作：学习如何使用 JavaScript 操作页面中的元素，如查询元素、修改元素属性和内容等。

6. 学习事件处理：学习如何使用事件监听器来响应用户操作，例如点击按钮或提交表单等。

7. 使用 AJAX 和 JSON：学习如何使用 AJAX 发送 HTTP 请求并处理响应数据，以及如何解析 JSON 数据格式。

8. 掌握常见库和框架：了解常见的 JavaScript 库和框架，例如 jQuery 和 React，并学会使用它们来简化开发过程。


## Usage
---

1. 编写 HTML 页面：

```html
<!DOCTYPE html>
<html>
<head>
	<title>My Website</title>
</head>
<body>
	<h1>Welcome to my website!</h1>
	<p>This is a paragraph.</p>

	<script src="script.js"></script><!--添加 JavaScript 文件 -->
</body>
</html>
```

2. 在 HTML 页面中添加 JavaScript：

```javascript
// script.js

alert("Hello, world!"); //显示一个提示框
```

3. 学习基础语法：

```javascript
// 声明变量和赋值
var num = 10;
var str = "Hello";

// 数据类型
var bool = true;
var arr = [1, 2, 3];
var obj = {name: "John", age: 30};

// 运算符
var sum = 2 + 3;
var diff = 5 - 2;
var product = 3 * 4;
var quotient = 10 / 2;

// 控制流程
if (num > 5) {
	console.log("Num is greater than 5");
} else {
	console.log("Num is less than or equal to 5");
}
```

4. 学习函数：

```javascript
// 定义函数
function greet(name) {
	return "Hello, " + name + "!";
}

// 调用函数并输出结果到控制台
console.log(greet("John"));

// 使用闭包保持变量状态并返回函数
function counter() {
	var count = 0;

	return function() {
		count++;
		return count;
	}
}

var c = counter(); //创建一个计数器实例

console.log(c()); //输出计数器的值为1 
console.log(c()); //输出计数器的值为2
console.log(c()); //输出计数器的值为3
```

5. 掌握 DOM 操作：

```javascript
// 查询元素并修改内容和属性
var heading = document.querySelector("h1");
heading.innerHTML = "Welcome to my awesome website!";
heading.style.color = "red";
```

6. 学习事件处理：

```javascript
// 监听按钮点击事件并显示提示框
var button = document.querySelector("button");
button.addEventListener("click", function() {
  alert("Button clicked!");
});
```

## Tutorial
---
Source:: https://www.liaoxuefeng.com/wiki/1022910821149312/1023020745357888
- JavaScript简介
- 快速入门
  > 要查看一个变量的内容，在Console中输入`console.log(a);`，回车后显示的值就是变量的内容。  
	- [[JavaScript_基本语法|基本语法]]
	- [[JavaScript_ 数据类型和变量|数据类型和变量]]
	- [ ] [[JavaScript_字符串|字符串]]
	- [ ] 数组
	- [ ] 对象
	- [ ] 条件判断
	- [ ] 循环
	- [ ] Map和Set
	- [ ] iterable
- [ ] 函数
	- [ ] 函数定义和调用
	- [ ] 变量作用域与解构赋值
	- [ ] 方法
	- [ ] 高阶函数
		- [ ] map/reduce
		- [ ] filter
		- [ ] sort
		- [ ] Array
	- [ ] 闭包
	- [ ] 箭头函数
	- [ ] generator
- [ ] 标准对象
	- [ ] Date
	- [ ] RegExp
	- [ ] JSON
- [ ] 面向对象编程
	- [ ] 创建对象
	- [ ] 原型继承
	- [ ] class继承
- [ ] 浏览器
	- [ ] 浏览器对象
	- [ ] 操作DOM
		- [ ] 更新DOM
		- [ ] 插入DOM
		- [ ] 删除DOM
	- [ ] 操作表单
	- [ ] 操作文件
	- [ ] AJAX
	- [ ] Promise
	- [ ] async函数
	- [ ] Canvas
- [ ] 错误处理
	- [ ] 错误传播
	- [ ] 异步错误处理
- [ ] jQuery
	- [ ] 选择器
		- [ ] 层级选择器
		- [ ] 查找和过滤
	- [ ] 操作DOM
		- [ ] 修改DOM结构
	- [ ] 事件
	- [ ] 动画
	- [ ] AJAX
	- [ ] 扩展
- [ ] underscore
	- [ ] Collections
	- [ ] Arrays
	- [ ] Functions
	- [ ] Objects
	- [ ] Chaining
- [ ] Node.js
	- [ ] 安装Node.js和npm
	- [ ] 第一个Node程序
	- [ ] 搭建Node开发环境
	- [ ] 模块
	- [ ] 基本模块
		- [ ] fs
		- [ ] stream
		- [ ] http
		- [ ] crypto
	- [ ] Web开发
		- [ ] koa
			- [ ] koa入门
			- [ ] 处理URL
			- [ ] 使用Nunjucks
			- [ ] 使用MVC
		- [ ] mysql
			- [ ] 使用Sequelize
			- [ ] 建立Model
		- [ ] mocha
			- [ ] 编写测试
			- [ ] 异步测试
			- [ ] Http测试
		- [ ] WebSocket
			- [ ] 使用ws
			- [ ] 编写聊天室
		- [ ] REST
			- [ ] 编写REST API
			- [ ] 开发REST API
		- [ ] MVVM
			- [ ] 单向绑定
			- [ ] 双向绑定
			- [ ] 同步DOM结构
			- [ ] 集成API
			- [ ] 在线电子表格
	- [ ] 期末总结

其他一些教学网站
- [MDN](https://developer.mozilla.org/zh-CN/docs/Learn/JavaScript)
- [C语言中文网](http://c.biancheng.net/js/)
- [w3school](https://www.w3school.com.cn/js/index.asp)