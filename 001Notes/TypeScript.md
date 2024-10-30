---
aliases:
  - ts
  - Ts
tags:
  - 计算机/编程语言
DateCreated: 2024-01-17T16:43
DateModified: 2024-07-15T17:35
---
# TypeScript

## QuickStart
---

TypeScript 是一种由 Microsoft 开发的开源编程语言，它是 [[JavaScript]] 的超集，意味着它扩展 了 JavaScript，提供了更多的功能和类型检查。TypeScript 代码可以被编译成 JavaScript 代码，并且可以在任何支持 JavaScript 的地方运行。

以下是一些简单的 TypeScript 代码示例：

1. 变量和数据类型定义
```typescript
let name: string = "John";
let age: number = 30;
let isStudent: boolean = true;
```

2. 函数定义
```typescript
function add(num1: number, num2: number): number {
  return num1 + num2;
}
```

3. 类定义
```typescript
class Person {
  name: string;
  age: number;

  constructor(name: string, age: number) {
    this.name = name;
    this.age = age;
  }

  greet() {
    console.log(`Hello, my name is ${this.name} and I'm ${this.age} years old.`);
  }
1

let person = new Person("John", 30);
person.greet();
```

4. 接口定义
```typescript
interface Shape {
  color: string;
  area(): number;
}

class Rectangle implements Shape {
  color: string;

  constructor(color: string, private width: number, private height: number) {
    this.color = color;
  }

  area(): number {
    return this.width * this.height;
  }
}

let rectangle = new Rectangle("blue", 10, 20);
console.log(rectangle.area());
```

## Document
---
 
1. [TypeScri pt 官方文档](ht tps://www.typescriptlang.org/docs/)

	这是 TypeScript 官方提供的文档，里面包含了 TypeScript 的基本语法、类型、类、模块等概念和用法，以及一些高级特性。您可以按照文档的顺序逐步学习。

2. [TypeScript Handbook中文版](https://github.com/zhongsp/TypeScript/blob/dev/README.md)

   > 这是一份中文版的 TypeScript 手册，内容和官 方文档类似，但是更加 详细和易于理解。
   >
   > 另外，这个手册的 Book 版似乎有问题，直接看仓库的源码就好

3. [Typ eScript Deep Dive](https://basarat.gitbook.io/typescript/)

   > 这是一份深入理解 TypeScript 的教程，作者对 TypeScript 的各种特性进行了详细的解释和示例。

4. [TypeScript Playground](https://www.typescriptlang.org/play)

   > 这是 TypeScript 官方提供的一个在线编辑器，您可以在这里尝试编写 TypeScript 代码，并且立即看到运行结果。
