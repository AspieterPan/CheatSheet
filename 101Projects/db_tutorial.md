---
tags:
  - 计算机/数据库
  - Project/Program
  - 计算机/编程语言/C
Status: Done
Process: 3/15
DateCreated: 2024-04-25T01:53
DateModified: 2024-07-16T22:49
Priority: "0"
---
# db_tutorial

[Let's Build a Simple Database](https://cstack.github.io/db_tutorial/)

## Contents
---
- Part 1 - Introduction and Setting up the REPL
- Part 2 - World's Simplest SQL Compiler and Virtual Machine
- Part 3 - An In-Memory, Append-Only, Single-Table Database
- Part 4 - Our First Tests (and Bugs)
- Part 5 - Persistence to Disk
- Part 6 - The Cursor Abstraction
- Part 7 - Introduction to the B-Tree
- Part 8 - B-Tree Leaf Node Format
- Part 9 - Binary Search and Duplicate Keys
- Part 10 - Splitting a Leaf Node
- Part 11 - Recursively Searching the B-Tree
- Part 12 - Scanning a Multi-Level B-Tree
- Part 13 - Updating Parent Node After a Split
- Part 14 - Splitting Internal Nodes
- Part 15 - Where to go next

## Summary
---
- 用 C 语言写的一个简易的数据库
- 有 REPL 的前端界面, 以及后端自己实现的 B+Tree 数据结构
- 下一步: [Mini DBMS in Rust](https://github.com/kw7oe/mini-db)
	- 用 Rust 重写了这个教程项目, 并添加了很多新的功能
