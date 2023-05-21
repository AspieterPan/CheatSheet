# MakefileCheatSheet

## 自动化变量

```makefile
a: a.o b.o c.o d.o
  g++ -c $(CFLAGS) -o $@ $<
```

| 变量  | 说明                                                                                                          |
| ----- | ------------------------------------------------------------------------------------------------------------- |
| \$@:  | 表示模式规则中的目标文件,对于上面的模式规则,$@表示 a                                                          |
| \$<:  | 表示依赖中的第一个文件.对于上述规则,$<表示 a.o                                                                |
| \$^:  | 表示所有依赖文件的集合,对于上述规则$^表示 a.o b.o c.o d.o                                                     |
| \$+:  | 表示所有依赖文件的集合(不去重).对于上述规则$+表示 a.o b.o c.o d.o                                             |
| \$%:  | 仅当目标是函数库文件(.a)文件时，表示规则中目标成员名。如一个目标是(test.a(a.o)),此时$%表示 a.o, $@表示 test.a |
| \$?:  | 所有比目标新的依赖目标的集合                                                                                  |
| \$\*: | 表示目标规则中%以及%之前的部分。如若目标文件为”src/test.o”,目标文件模式为”src/%.o”,此时$\*表示”src/test”。    |

## 常用函数

> https://langzi989.github.io/2017/09/20/makefile%E8%87%AA%E5%8A%A8%E5%8F%98%E9%87%8F%E4%B8%8E%E9%9A%90%E6%99%A6%E8%A7%84%E5%88%99%E6%8E%A8%E5%AF%BC/

### wildcard

展开带通配符的变量

e.g. `SOURCE=$(wildcard *.cpp)` SOURCE 为所有.cpp 后缀的文件集合

### patsubst

第一个是需要匹配的样式，第二个是表示用什么替换它，第三个被处理的以空格隔开的字符串。

```bash
$(patsubst <pattern>,<sub>,<str>)
#<pattern>: 匹配样式
#<sub>: 替换后的内容
#<str>: 被处理的字符串
```

### subst

字符串替换,将 text 中的 from 替换为 to

`$(subst <from>,<to>,<text>)`

```bash
#返回值：this is b
$(subst a, b, this is a)
```

### filter

过滤特定模式的字符串

```bash
$(filter <pattern...>,<text...>)
```

```bash
#如source为a.c b.s c.h,则下列的返回值为a.c b.s
$(filter *.c *.s, $(source))
```
