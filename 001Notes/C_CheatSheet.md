# C_CheatSheet

- [C_CheatSheet](#c_cheatsheet)
  - [内联汇编](#内联汇编)
    - [Usage](#usage)
  - [系统调用](#系统调用)
    - [getpagesize](#getpagesize)
    - [mmap](#mmap)

## 内联汇编

asm
- 参考
  - [[[linux]] C 中内联汇编的语法格式及使用方法](https://www.cnblogs.com/sky-heaven/p/7561625.html)

### Usage

```c
 int a=10, b;
    asm ("movl %1, %%eax;  /* NOTICE: 下面会说明此处用%%eax引用寄存器eax的原因
          movl %%eax, %0;"
          :"=r"(b)          /* output 该字段的语法后面会详细说明，此处可无视，下同 */
          :"r"(a)          /* input  */
          :"%eax"          /* clobbered register */
        );
```

| Symbol  | Description                                                         |
| ------- | ------------------------------------------------------------------- |
| %0      | 输出参数，对应`:"=r"(b)`                                            |
| %1      | 输入参数, 对应`:"r"(a)`                                             |
| "=r"(b) | "="代表输出， "r"指定约束类型(见下), "b"代表输出到 c 语言中的变量 b |
| %%eax   | 当寄存器与操作数（%1）在同一行时，前面需要加两个%                   |

> ### "r" 约束类型
>
> **1）寄存器操作数约束（register operand constraint, r）**
>
> 当操作数被指定为这类约束时，表明汇编指令执行时，操作数被将存储在指定的通用寄存器（General Purpose Registers, GPR）中。例如：
>
> asm ("movl %%eax, %0\n" : "=r"(out_val));
>
> 该指令的作用是将%eax 的值返回给%0 所引用的 C 语言变量 out_val，根据"=r"约束可知具体的操作流程为：先将%eax 值复制给任一 GPR，最终由该寄存器将值写入%0 所代表的变量中。"r"约束指明 gcc 可以先将%eax 值存入任一可用的寄存器，然后由该寄存器负责更新内存变量。
>
> 通常还可以明确指定作为“中转”的寄存器，约束参数与寄存器的对应关系为：
>
> a : %eax, %ax, %al
>
> b : %ebx, %bx, %bl
>
> c : %ecx, %cx, %cl
>
> d : %edx, %dx, %dl
>
> S : %esi, %si
>
> D : %edi, %di
>
> 例如，如果想指定用%ebx 作为中转寄存器，则命令为：asm ("movl %%eax, %0\n" : "=b"(out_val));
>
> **2）内存操作数约束（Memory operand constraint, m）**
>
> 当我们不想通过寄存器中转，而是直接操作内存时，可以用"m"来约束。例如：
>
> asm volatile ( "lock; decl %0" : "=m" (counter) : "m" (counter));
>
> 该指令实现原子减一操作，输入、输出操作数均直接来自内存（也正因如此，才能保证操作的原子性）。
>
> **3）关联约束（matching constraint）**
>
> 在有些情况下，如果命令的输入、输出均为同一个变量，则可以在内联汇编中指定以 matching constraint 方式分配寄存器，此时，input operand 和 output operand 共用同一个“中转”寄存器。例如：
>
> asm ("incl %0" :"=a"(var):"0"(var));
>
> 该指令对变量 var 执行 incl 操作，由于输入、输出均为同一变量，因此可用"0"来指定都用%eax 作为中转寄存器。注意"0"约束修饰的是 input operands。
>
> 4）其它约束
>
> 除上面介绍的 3 中常用约束外，还有一些其它的约束参数（如"o"、"V"、"i"、"g"等），感兴趣的同学可以参考这里。

## 系统调用

### getpagesize

```c
#include <unistd.h>
// 获取内存页大小
int getpagesize(void);
```

### mmap

```c
#include <man.h>

void* mmap(void* start,size_t length,int prot,int flags,int fd,off_t offset);
// 参数 start：指向欲映射的内存起始地址，通常设为 NULL，代表让系统自动选定地址，映射成功后返回该地址。

// 参数 length：代表将文件中多大的部分映射到内存。

// 参数 prot：映射区域的保护方式。可以为以下几种方式的组合：
// PROT_EXEC 映射区域可被执行
// PROT_READ 映射区域可被读取
// PROT_WRITE 映射区域可被写入
// PROT_NONE 映射区域不能存取

// 参数 flags：影响映射区域的各种特性。在调用 mmap()时必须要指定 MAP_SHARED 或 MAP_PRIVATE。
// MAP_FIXED 如果参数 start 所指的地址无法成功建立映射时，则放弃映射，不对地址做修正。通常不鼓励用此旗标。
// MAP_SHARED 对映射区域的写入数据会复制回文件内，而且允许其他映射该文件的进程共享。
// MAP_PRIVATE 对映射区域的写入操作会产生一个映射文件的复制，即私人的“写入时复制”（copy on write）对此区域作的任何修改都不会写回原来的文件内容。
// MAP_ANONYMOUS 建立匿名映射。此时会忽略参数 fd，不涉及文件，而且映射区域无法和其他进程共享。
// MAP_DENYWRITE 只允许对映射区域的写入操作，其他对文件直接写入的操作将会被拒绝。
// MAP_LOCKED 将映射区域锁定住，这表示该区域不会被置换（swap）。

// 参数 fd：要映射到内存中的文件描述符。如果使用匿名内存映射时，即 flags 中设置了 MAP_ANONYMOUS，fd 设为-1。有些系统不支持匿名内存映射，则可以使用 fopen 打开/dev/zero 文件，然后对该文件进行映射，可以同样达到匿名内存映射的效果。

// 参数 offset：文件映射的偏移量，通常设置为 0，代表从文件最前方开始对应，offset 必须是分页大小的整数倍。

// 返回值： 若映射成功则返回映射区的内存起始地址，否则返回MAP_FAILED(－1)，错误原因存于errno 中。
```

内存映射的步骤:

1. 用 open 系统调用打开文件, 并返回描述符 fd.
2. 用 mmap 建立内存映射, 并返回映射首地址指针 start.
3. 对映射(文件)进行各种操作, 显示(printf), 修改(sprintf).
4. 用 munmap(void \*start, size_t lenght)关闭内存映射.
5. 用 close 系统调用关闭文件 fd.

> UNIX 网络编程第二卷进程间通信对 mmap 函数进行了说明。该函数主要用途有三个：
> 1、将一个普通文件映射到内存中，通常在需要对文件进行频繁读写时使用，这样用内存读写取代 I/O 读写，以获得较高的性能；
> 2、将特殊文件进行匿名内存映射，可以为关联进程提供共享内存空间；
> 3、为无关联的进程提供共享内存空间，一般也是将一个普通文件映射到内存中。
