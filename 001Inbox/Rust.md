---
aliases: []
tags:
  - Program/Language
DateCreated: 2023-08-28T23:13
DateModified: 2023-11-17T17:36
---
# Rust

## Tutorial
---

> 以下来自 [The Rust Book](https://doc.rust-lang.org/book/)

- Foreword
- Introduction
- 1. Getting Started
	- 1.1. Installations
	- 1.2. Hello, World!
	- 1.3. Hello, Cargo!
- 2. Programming a Guessing Game
- 3. Common Programming Concepts
	- 3.1. Variables and Mutability
		- Variables and Mutability
			- `let x = 1;` 声明一个不可变的变量
			- `let mut x = 1;` 声明一个可变的变量
		- Constants
			- `const THREE_HOURS_IN_SECONDS: u32 = 60 * 60 * 3;`
				- 类似 C 的 `#define MAX 50`
			- 通常用来声明一些全局常量
		- Shadowing
			- `let` 声明的变量可以再之后用 `let` 再次声明
			- 但是不同于修改变量，这是重新声明的一个新的变量
				- 只不过名称相同
				- 同一作用域内有多个名称相同的变量的话
					- 只会取最后一个
				- 被覆盖的变量也会存在，直到离开作用域被回收
	- 3.2. Data Types
		- Rust is a statically typed language
		- Scalar Types
			- Integer Types
				- i/u
					- 8/16/32/64/128
				- isize/usize
					- 64/32 bits if you're on a 64/32-bit architecture
			- Floating-Point Types
				- f 32/64
			- Numeric Operations
				- `+ - * / %`
			- The Boolean Type
				- `let f:bool = false;`
			- The Character Type
				- `let c: char = 'z';`
		- Compound Types
			- The Tuple Type
				- fixed length
				- `let tup: (i32, f64, u8) = (500, 6.4, 1);`
				- `let (x, y, z) = tup;`
				- `let i = tup.0;`
			- The Array Type
				- `let a: [i32; 5] = [1, 2, 3, 4, 5];`
				- `let first = a[0];`
	- 3.3. Functions
		- `fn plus_one(x: i32) -> i32 { x + 1 }`
		- Statements
			- some action
			- do not return a value
				- Wrong: `let x = (let y = 6);`
			- Function definitions are also statements
		- Expressions
			- evaluate to a value
			- can be part of statements
				- `let y = {let x = 3; x + 1};`
			- Calling a macro is an expression
		- Functions with Return Values
	- 3.4. Comments
		- `// hello, world`
	- 3.5. Control Flow
		- if Expressions
			- `if number < 5 { true } else { false }`
		- Handling Multiple Conditions with else if
			- `if con { } else if con { } else if con{ } else { }`
		- Using if in a let Statement
			- `let number = if con { 5 } else { 6 }`
		- Repetition with Loops
			- Repeating Code with loop
				- `loop { println!{"again!"}; }`
			- Returning Values from Loops
				- `let res = loop { coun += 1; if cout == 10 { break cout * 2; } }`
			- Loop Labels to Disambiguate Between Multiple Loops
				- `'counting_up: loop{ loop { if con1 { break; } if con2 { break 'counting_up; }`
				- Loop labels must begin with a single quote
		- Conditional Loops with while
			- `while con { do }`
		- Looping Through a Collection with for
			- `let a = [10, 20, 30 ,40, 50];`
			- `for element in a { do } `
			- `for number in (1..4).rev() { do }`
- 4. Understanding Ownership
	- 4.1. What is Ownership
		- The Stack and the Heap
		- Ownership Rules
			- Each value in Rust has an owner
			- There can only be one owner at a time
			- when the owner goes out of scope, the value will be dropped
		- Variable Scope
		- The String Type
			- `let s = String::from("hello");`
			- `s.push_str(", world!");`
		- Memory and Allocation
			- 在其他语言中,一个 new 必须应对一个 delete 来释放在堆上的数据
			- 在 Rust 中, 堆数据的所有者在离开作用域时会自动销毁堆数据
		- Variables and Data Interacting with Move
			- 如果一份堆数据的引用被多个变量所持有,在这些变量离开作用域的时候,会多次销毁
				- 这是被称为 "double free" 的内存安全 bug
				- 所以 Rust 中不允许引用拷贝
					- 当 `let S2 = S1` 时,
						- 实际上是 S2 拿走了 S1 中堆数据的所有权
						- 之后在 S2 的作用域内,S1 无法正常使用
					- Rust 中这种行为称为 "Move"
						- 区别于 "Shallow copy"
		- Variables and Data Interacting with Clone
			- `let s2 = s1.clone();`
			- 相当于 "Deeply copy"
		- Stack-Only Data: Copy
		- Ownership and Functions
			- 堆上数据的所有者,作为参数传入函数后,会失去所有权
			- 调用函数后, 堆上数据随着形参离开作用域而被销毁 (如果没有返回的话)
		- Return Values and Scope
			- 函数内变量的所有权,可以通过函数返回来交接
			- 如果函数要多个返回值,可以使用 Tuple
			- 更一般的,我们通常通过 "reference" 来传递参数
	- 4.2. References and Borrowing
		- 在堆变量的名称前加 "&" 来获得一个引用
		- 引用变量只是 "borrowing" 这个堆数据的所有权
			- 当引用变量离开作用域的时候,
				- 会自动把借来的所有权还给之前的变量
		- 引用变量默认不可变
			- 可以一样添加 "mut" 来声明一个可变的引用
		- 同一个变量, 同时只能有最多一个**可变**引用
			- 不可变的引用可以存在多个
			- 防止 "data race"
				- 并发下多指针同时访问一份数据导致的不可预期结果
			- 如果已经有了不可变引用,
				- 则不可声明新的可变引用
		- 悬挂引用
			- Rust 中不存在悬挂引用
				- 如果一个引用指向的对象不存在了, 这个引用会直接报错
	- 4.3. The Slice Type
		- A slice is a kind of reference
			- so it does not have ownership
		- String Slices
			- `let s = String::from("hello world");`
				- `let hello = &s[0..5];`
				- `let world = &s[6..11];`
				- The ending_index is not included.
- 5. Using Structs to Structure Related Data
	- [ ] 5.1. Defining and Instantiating Structs
	- [ ] 5.2. An Example Program Using Struct
	- [ ] 5.3. Method Syntax
- [ ] 6. Enums and Pattern Matching
	- [ ] 6.1. Defining an Enum
	- [ ] 6.2. The match Control Flow Construct
	- [ ] 6.3. Concise Control Flow with if let
- [ ] 7. Managing Growing Projects with Packages, Crates, and Modules
	- [ ] 7.1. Packages and Crate
	- [ ] 7.2. Defining Modules to Control Scope and Privacy
	- [ ] 7.3. Paths for Referring to an Item in the Module Trees
	- [ ] 7.4. Bringing Paths Into Scope with the use Keywords
	- [ ] 7.5. Separating Modules into Different Files
- [ ] 8. Common Collections
	- [ ] 8.1. Storing Lists of Values with Vectorss
	- [ ] 8.2. Storing UTF-8 Encoded Text with Stringss
	- [ ] 8.3. Storing Keys with Associated Values in Hash Maps
- [ ] 9. Error Handling
	- [ ] 9.1. Unrecoverable Errors with panic!
	- [ ] 9.2. Recoverable Errors with Result!
	- [ ] 9.3. To panic! or Not to panic!
- [ ] 10. Generic Types, Traits, and Lifetimes
	- [ ] 10.1. Generic Data Typess
	- [ ] 10.2. Traits: Defining Shared Behaviors
	- [ ] 10.3. Validating References with Lifetimes
- [ ] 11. Writing Automated Tests
	- [ ] 11.1. How to Write Tests
	- [ ] 11.2. Controlling How Tests Are Runs
	- [ ] 11.3. Test Organization
- [ ] 12. An I/O Project: Building a Command Line Program
	- [ ] 12.1. Accepting Command Line Arguments
	- [ ] 12.2. Reading a Files
	- [ ] 12.3. Refactoring to Improve Modularity and Error Handlings
	- [ ] 12.4. Developing the Library's Functionality with Test Driven Developments
	- [ ] 12.5. Working with Environment Variables12.6. Writing Error Messages to Standard Error Instead of Standard Output
- [ ] 13. Functional Language Features: Iterators and Closures
	- [ ] 13.1. Closures: Anonymous Functions that Capture Their Environment
	- [ ] 13.2. Processing a Series of Items with Iterators
	- [ ] 13.3. Improving Our I/O Project
	- [ ] 13.4. Comparing Performance: Loops vs. Iterators
- [ ] 14. More about Cargo and Crates.io
	- [ ] 14.1. Customizing Builds with Release Profiless
	- [ ] 14.2. Publishing a Crate to Crates.ios
	- [ ] 14.3. Cargo Workspacess
	- [ ] 14.4. Installing Binaries from Crates.io with cargo installs
	- [ ] 14.5. Extending Cargo with Custom Commands
- [ ] 15. Smart Pointers
	- [ ] 15.1. Using Box\<T\> to Point to Data on the Heap
	- [ ] 15.2. Treating Smart Pointers Like Regular References with the Deref Trait
	- [ ] 15.3. Running Code on Cleanup with the Drop Trait
	- [ ] 15.4. Rc\<T\>, the Reference Counted Smart Pointert
	- [ ] 15.5. RefCell\<T\> and the Interior Mutability Patternt
	- [ ] 15.6. Reference Cycles Can Leak Memory
- [ ] 16. Fearless Concurrency
	- [ ] 16.1. Using Threads to Run Code Simultaneously
	- [ ] 16.2. Using Message Passing to Transfer Data Between Threadsy
	- [ ] 16.3. Shared-State Concurrency
	- [ ] 16.4. Extensible Concurrency with the Sync and Send Traits
- [ ] 17. Object Oriented Programming Features of Rust
	- [ ] 17.1. Characteristics of Object-Oriented Languagess
	- [ ] 17.2. Using Trait Objects That Allow for Values of Different Typess
	- [ ] 17.3. Implementing an Object-Oriented Design Pattern
- [ ] 18. Patterns and Matching
	- [ ] 18.1. All the Places Patterns Can Be Useds
	- [ ] 18.2. Refutability: Whether a Pattern Might Fail to Matchs
	- [ ] 18.3. Pattern Syntax
- [ ] 19. Advanced Features
	- [ ] 19.1. Unsafe Rusts
	- [ ] 19.2. Advanced Traitss
	- [ ] 19.3. Advanced Typess
	- [ ] 19.4. Advanced Functions and Closuress
	- [ ] 19.5. Macros
- [ ] 20. Final Project: Building a Multithreaded Web Server
	- [ ] 20.1. Building a Single-Threaded Web Servers
	- [ ] 20.2. Turning Our Single-Threaded Server into a Multithreaded Servers
	- [ ] 20.3. Graceful Shutdown and Cleanup
- [ ] 21. Appendix
	- [ ] 21.1. A - Keywords
	- [ ] 21.2. B - Operators and Symbolss
	- [ ] 21.3. C - Derivable Traitss
	- [ ] 21.4. D - Useful Development Toolss
	- [ ] 21.5. E - Editionss
	- [ ] 21.6. F - Translations of the Books
	- [ ] 21.7. G - How Rust is Made and "Nightly Rust"

## Resources
---
- 官网教程
	- https://doc.rust-lang.org/book/title-page.html
		- The Rust Book
		- 侧重于讲解 Rust 中的各种概念
	- https://doc.rust-lang.org/rust-by-example/index.html
		- Rust by Example
		- 侧重于代码怎么写
			- 适合看完 Book 后, 作为资料书随时翻阅
