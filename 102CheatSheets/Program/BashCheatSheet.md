---
DateCreated: 2023-04-07T11:05
DateModified: 2023-07-18T16:36
---
# BashCheatSheet
Top:: [[Bash]]

- [BashCheatSheet](#bashcheatsheet)
  - [Auto Argument](#auto-argument)
  - [Globbing](#globbing)
  - [Utils](#utils)
  - [Others](#others)

## Auto Argument
---

| Argument  | Description                                                                      |
| --------- | -------------------------------------------------------------------------------- |
| \$\$        | Shell 本身的 PID（ProcessID）|
| $!        | Shell 最后运行的后台 Process 的 PID                                              |
| $?        | 最后运行的命令的结束代码（返回值）|
| $-        | 使用 Set 命令设定的 Flag 一览                                                    |
| \$\*       | 所有参数列表。如 "$\*"用「"」括起来的情况、以"$1 $2 … $n" 的形式输出所有参数。|
| \$@        | 所有参数列表。如 "$@" 用「"」括起来的情况、以 "$1" "$2" … "$n" 的形式输出所有参数。|
| $#        | 添加到 Shell 的参数个数                                                          |
| $0        | Shell 本身的文件名                                                               |
| \$1～$n | 添加到 Shell 的各参数值。$1 是第 1 参数、$2 是第 2 参数…。|

## Globbing
---

| Symbol     | Description        |
| ---------- | ------------------ |
| \*         | 匹配任意数量的字符 |
| ?          | 匹配单个字符       |
| {foo, bar} | 匹配 foo 或者 bar  |
| {a..d}     | 匹配 a, b , c, d   |

## Utils
---

- [ShellCheck](https://www.shellcheck.net/)
  - ShellCheck is a GPLv3 tool that gives warnings and suggestions for bash/sh shell scripts:

## Others
---

- shebang
  - `#!/usr/bin/env bash`
