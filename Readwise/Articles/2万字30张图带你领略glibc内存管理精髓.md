---
Author: [[雨乐]]
Full Title: 2万字|30张图带你领略glibc内存管理精髓
Tags: Reading
Category: Readwise_articles
URL: https://mp.weixin.qq.com/s?__biz=Mzk0MzI4OTI1Ng==&mid=2247485953&idx=1&sn=f8cd484607ab07f15247ecde773d2e1c&scene=21#wechat_redirect
---
# 2万字|30张图带你领略glibc内存管理精髓

![rw-book-cover](https://readwise-assets.s3.amazonaws.com/media/uploaded_book_covers/profile_1019574/0)

## Highlights
---
- • 栈区（Stack）— 存储程序执行期间的本地变量和函数的参数，从高地址向低地址生长
  • 堆区（Heap）动态内存分配区域，通过 malloc、new、free 和 delete 等函数管理
  • 未初始化变量区（BSS）— 存储未被初始化的全局变量和静态变量
  • 数据区（Data）— 存储在源代码中有预定义值的全局变量和静态变量
  • 代码区（Text）— 存储只读的程序执行代码，即机器指令 ([View Highlight](https://read.readwise.io/read/01h8y00vwqag41p8xr728mrq6j))

- 这里要提到一个很重要的概念，内存的延迟分配，只有在真正访问一个地址的时候才建立这个地址的物理映射，这是 Linux 内存管理的基本思想之一。Linux 内核在用户申请内存的时候，只是给它分配了一个线性区（也就是虚拟内存），并没有分配实际物理内存；只有当用户使用这块内存的时候，内核才会分配具体的物理页面给用户，这时候才占用宝贵的物理内存。内核释放物理页面是通过释放线性区，找到其所对应的物理页面，将其全部释放的过程。 ([View Highlight](https://read.readwise.io/read/01h8y4rmcsafh133hnxa44w1eh))

- 进程的内存结构，在内核中，是用mm_struct来表示的，其定义如下：
  struct mm_struct { ... unsigned long (*get_unmapped_area) (struct file *filp, unsigned long addr, unsigned long len, unsigned long pgoff, unsigned long flags); ... unsigned long mmap_base; /* base of mmap area */ unsigned long task_size; /* size of task vm space */ ... unsigned long start_code, end_code, start_data, end_data; unsigned long start_brk, brk, start_stack; unsigned long arg_start, arg_end, env_start, env_end; ...}
  在上述mm_struct结构中：
  • [start_code,end_code)表示代码段的地址空间范围。
  • [start_data,end_start)表示数据段的地址空间范围。
  • [start_brk,brk)分别表示heap段的起始空间和当前的heap指针。
  • [start_stack,end_stack)表示stack段的地址空间范围。
  • mmap_base表示memory mapping段的起始地址。 ([View Highlight](https://read.readwise.io/read/01h8y4raxjdb2mp74d19y6zrdx))

- mmap()函数将一个文件或者其它对象映射进内存。文件被映射到多个页上，如果文件的大小不是所有页的大小之和，最后一个页不被使用的空间将会清零。
  munmap 执行相反的操作，删除特定地址区域的对象映射。
  函数的定义如下：
  #include <sys/mman.h>void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset); int munmap(void *addr, size_t length); ([View Highlight](https://read.readwise.io/read/01h8y4znnwbcr4zb7m3kk361d6))

- 映射关系分为以下两种：
  • 文件映射: 磁盘文件映射进程的虚拟地址空间，使用文件内容初始化物理内存。
  • 匿名映射: 初始化全为0的内存空间 ([View Highlight](https://read.readwise.io/read/01h8y5nwj0pcj6pjjykch5ast3))

- 映射关系是否共享，可以分为:
  • 私有映射(MAP_PRIVATE)
  • 多进程间数据共享，修改不反应到磁盘实际文件，是一个copy-on-write（写时复制）的映射方式。
  • 共享映射(MAP_SHARED)
  • 多进程间数据共享，修改反应到磁盘实际文件中。 ([View Highlight](https://read.readwise.io/read/01h8y5p084eaw5rz0d44knjxjk))

- 整个映射关系总结起来分为以下四种:
  • 私有文件映射 多个进程使用同样的物理内存页进行初始化，但是各个进程对内存文件的修改不会共享，也不会反应到物理文件中
  • 私有匿名映射
  • mmap会创建一个新的映射，各个进程不共享，这种使用主要用于分配内存(malloc分配大内存会调用mmap)。例如开辟新进程时，会为每个进程分配虚拟的地址空间，这些虚拟地址映射的物理内存空间各个进程间读的时候共享，写的时候会copy-on-write。
  • 共享文件映射
  • 多个进程通过虚拟内存技术共享同样的物理内存空间，对内存文件的修改会反应到实际物理文件中，也是进程间通信(IPC)的一种机制。
  • 共享匿名映射
  • 这种机制在进行fork的时候不会采用写时复制，父子进程完全共享同样的物理内存页，这也就实现了父子进程通信(IPC)。 ([View Highlight](https://read.readwise.io/read/01h8y5pajrz3pe9s9r9w18vwgw))

