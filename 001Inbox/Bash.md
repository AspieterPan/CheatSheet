---
DateCreated: 2023-07-18T16:36
DateModified: 2023-07-18T16:36
Tags: Program/Language 
---
# Bash

## 基本语法
---
bash 基本语法

Bash（Bourne Again SHell）是一种常用的Unix shell和命令行解释器。它是Linux系统中默认的shell，并且也可以在其他Unix系统上使用。

以下是Bash的基本语法：

1. 命令行提示符：
   在Bash中，命令行提示符通常以`$`或`#`开头。当你在命令行输入命令时，你会看到一个提示符等待你的输入。

2. 注释：
   使用`#`字符来添加注释。注释部分将被忽略，不会被执行。

3. 变量：
   Bash中可以使用变量来存储数据。定义一个变量时，不需要指定其类型。

   ```bash
   variable_name=value
   ```

4. 输出：
   使用`echo`命令可以将文本输出到终端。

   ```bash
   echo "Hello, World!"
   ```

5. 输入：
   使用`read`命令可以从终端读取用户输入并存储到一个变量中。

   ```bash
   read variable_name
   ```

6. 条件语句：
   使用条件语句可以根据条件执行不同的操作。条件通常使用比较运算符（如等于、不等于、大于、小于等）进行判断。

   ```bash
   if [ condition ]; then
       # do something
   else
       # do something else
   fi
   ```

7. 循环语句：
    Bash提供了多种循环语句，如`for`循环、`while`循环和`until`循环。

   ```bash
   for variable in list; do
       # do something
   done

   while [ condition ]; do
       # do something
   done

   until [ condition ]; do
       # do something
   done
   ```

8. 函数：
    Bash中可以定义函数来组织代码并进行复用。

    ```bash
    function_name() {
        # function body
    }

    # 调用函数
    function_name
    ```

9. 文件操作：
   Bash提供了一些用于文件操作的命令，如创建目录、复制文件、移动文件等。

   ```bash
   mkdir directory_name  # 创建目录

   cp file1 file2  # 复制文件

   mv file1 file2  # 移动或重命名文件

   rm file_name  # 删除文件

   ls directory_name  # 列出目录中的文件和子目录
   ```

以上是Bash的基本语法。通过使用这些语法，你可以编写脚本来完成各种任务，如自动化任务、批量处理文件等。