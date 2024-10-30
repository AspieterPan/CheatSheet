---
aliases: 
tags:
  - 计算机/编程语言/Rust
DateCreated: 2024-09-09T00:54
DateModified: 2024-09-09T00:55
---
# Rust 的 lifetime 理解

## 变量自身的 lifetime 与引用对象的 lifetime

每一个变量，都有一个 lifetime

每一个引用类型的变量，除了自己的 lifetime 以外，还有一个引用对象的 lifetime

例如 let a = &T；

那么 a 自身的 lifetime 是 'a，引用对象的 lifetime 是 'T

## lifetime 的检查机制

Rust 的编辑期检查的就只有一条：变量自身的 lifetime，不能超过引用对象的 lifetime

## 如何知道变量的引用对象的 lifetime

### 变量赋值时的 lifetime

当引用变量进行赋值的时候，引用对象的 lifetime 非常好确认： 

如果进行引用赋值，例如上面的 let a = &T；那么引用对象的 lifetime 就是被引用的变量的 lifetime

如果是复制一个引用变量，例如 let b = a；则 b 的引用对象的 lifetime 跟 a 的引用对象的 lifetime 是一样的

值得注意的是，当一个引用类型是可变的时候，其引用对象的 lifetime 在初始化的时候就确定了，后面不会改变

比如说 let mut p = &a；p = &b；

- p 先是获取了 a 的引用，然后获取了 b 的引用
- 但是由于 p 初始化的对象是&a，所以 p 的引用对象的 lifetime 一直是 'a，即 p：&'a T
- 当 p = &b 的时候，p 的类型仍然是 &'a T
- 如果 b 的 lifetime 'b 小于 'a，这时就会报错
- 即这里发生一次隐式的类型转换，&'b -> &'a，只有 'b 大于 'a 的时候，前者才是后者的子类（协变）

但当遇到函数和结构体的时候，就没有这么简单了

### 函数返回值的 lifetime

当一个函数的返回值是引用类型的时候，怎么确定引用对象的 lifetime 呢？

你可能首先想到，编辑器去检查函数内部是如何进行返回的不就好了？

但是一个函数进行返回的逻辑可能非常复杂，有多重循环与条件分支，以现在的编辑器能力无法做到自行推断。

因此需要人工在函数签名上标注出返回值的引用对象的 lifetime。

在函数签名中，需要在函数名称后声明几个 lifetime 的变量，并给所有的参数和返回值都标注上 lifetime

例如 fn foo<'a, 'b>(a: &'a str, b: &'b str) -> &'a str

- <'a, 'b> 声明了两个 lifetime 变量
- a: &'a str, b: &'b str 表明，将第一个参数的引用对象的 lifetime 赋给 'a，将第二个参数的引用对象的 lifetime 赋给 'b
- -> &'a str 表明，返回值的引用对象的 lifetime 是 'a，也就是与第一个参数的引用对象的 lifetime 保持相同

如何每一个函数都要把所有的参数和返回值标明 lifetime 也太麻烦了，因此 Rust 对于函数签名有一些隐式推断，这里不多赘述。 

总之自己写代码的时候，先不用写 lifetime，等编辑器报错的时候再尝试加上去即可。

### struct 的 lifetime

当 struct 的内部成员变量有引用类型的时候，需要表明这些变量引用对象的生命周期

struct RefStruct<'a, 'b> ( &'a i32, &'b i32);

- <'a, 'b> 声明两个 lifetime 变量 'a 与 'b
- （&'a i32, &'b i32) 当这个 struct 创建一个实例的时候，会将第一个成员变量的引用对象的 lifetime 赋值给 'a，将第二个成员变量的引用对象的 lifetime 赋值给 'b

当实现结构体的方法时，需要加上这些 lifetime 变量

impl<'a, 'b> RefStruct<'a, 'b> {}

- RefStruct<'a, 'b> 是上面的 struct 签名，照抄即可
- impl<'a, 'b> 就是又声明了两个 lifetime 变量，并将 RefStruct<'a, 'b> 中 'a 和 'b 的值赋给它们。因为两者完全一样，所以一般这里取名跟 struct 签名中的 lifetime 变量保持一致
- 在这个 impl 的语句内实现的 methods，都可以自由得使用声明的 lifetime 变量
