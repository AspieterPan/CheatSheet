---
Aliases: [ "#Program/Language/Python" ]
Tags: Program/Language
DateCreated: 2023-11-18T15:17
DateModified: 2023-12-05T22:48
---
# Python

## CheatSheet
---
 ![[Python_CheatSheet]]

## QuickStart
---

Python 是一种高级编程语言，它是一种通用的、解释性的、面向对象的编程语言。Python 具有简单易学、高效率和可扩展性等优点，因此在数据科学和机器学习领域得到广泛应用。

以下是 Python 快速入门的几个步骤：

1. 安装 Python

首先需要安装 Python。可以从官方网站 https://www.python.org/downloads/ 下载适合自己操作系统的版本。

1. 编写第一个程序

打开 IDLE（Integrated Development and Learning Environment），这是一个默认安装在 Python 中的代码编辑器，可以输入以下代码：

```python
print("Hello, World!")
```

保存为一个.py 文件，并执行该程序。你会看到 "Hello, World!" 这个字符串被输出到屏幕上。

1. 变量和数据类型

在 Python 中，变量可以存储各种不同类型的数据，例如数字、字符串和列表等。变量不需要声明或定义类型，直接赋值即可创建变量。

例如：

```python
x = 5
y = "Hello"
z = ["apple", "banana", "cherry"]
```

1. 控制流程

控制流程指决定程序运行哪些代码的方式。在 Python 中，有三种主要方式：条件语句（if-else）、循环语句（for、while）和函数。

例如：

```python
if x > 0:
    print("x is positive")
elif x < 0:
    print("x is negative")
else:
    print("x is zero")

for i in z:
    print(i)

def add_numbers(a, b):
    return a + b
```

1. 导入模块

Python 中有很多内置的模块和第三方模块，可以提供各种功能。要使用这些模块，需要导入它们。

例如：

```python
import math

x = math.sqrt(25)
print(x)
```

以上是 Python 快速入门的基本步骤。

## Python 爬虫
---
[[WebSpider]]
