---
Uid: 202305242228
Aliases: ts,Ts
Tags: Program/Language 
From: 
---
# Typescript

## QuickStart
---

TypeScript是一种由Microsoft开发的开源编程语言，它是JavaScript的超集，意味着它扩展了JavaScript，提供了更多的功能和类型检查。TypeScript代码可以被编译成JavaScript代码，并且可以在任何支持JavaScript的地方运行。

以下是一些简单的TypeScript代码示例：

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
}

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

1. [TypeScript官方文档](https://www.typescriptlang.org/docs/)

   > 这是TypeScript官方提供的文档，里面包含了TypeScript的基本语法、类型、类、模块等概念和用法，以及一些高级特性。您可以按照文档的顺序逐步学习。

2. [TypeScript Handbook中文版](https://github.com/zhongsp/TypeScript/blob/dev/README.md)

   > 这是一份中文版的TypeScript手册，内容和官方文档类似，但是更加详细和易于理解。
   > 
   > 另外，这个手册的 Book 版似乎有问题，直接看仓库的源码就好

3. [TypeScript Deep Dive](https://basarat.gitbook.io/typescript/)

   > 这是一份深入理解TypeScript的教程，作者对TypeScript的各种特性进行了详细的解释和示例。

4. [TypeScript Playground](https://www.typescriptlang.org/play)

   > 这是TypeScript官方提供的一个在线编辑器，您可以在这里尝试编写TypeScript代码，并且立即看到运行结果。
