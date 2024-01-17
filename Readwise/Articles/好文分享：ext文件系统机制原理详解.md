---
Author: [[作者：骏马金龙]]
Full Title: 好文分享：ext文件系统机制原理详解
tags: Reading
Category: Readwise_articles
URL: https://www.51cto.com/article/603104.html
---
# 好文分享：ext文件系统机制原理详解

![rw-book-cover](https://readwise-assets.s3.amazonaws.com/static/images/article3.5c705a01b476.png)

## Highlights
---
- 既然文件系统划分了块组，那么每个块组的信息和属性元数据又保存在哪里呢?
  ext文件系统每一个块组信息使用32字节描述，这32个字节称为块组描述符，所有块组的块组描述符组成块组描述符表GDT(group descriptor table)。 ([View Highlight](https://read.readwise.io/read/01hfhhxhphxes0f0m446t0hsxn))

- 数据所占用的block由文件对应inode记录中的block指针找到，不同的文件类型，数据block中存储的内容是不一样的。以下是Linux中不同类型文件的存储方式。
  • 对于常规文件，文件的数据正常存储在数据块中。
  • 对于目录，该目录下的所有文件和一级子目录的目录名存储在数据块中。
  • 文件名不是存储在其自身的inode中，而是存储在其所在目录的data block中。
  • 对于符号链接，如果目标路径名较短则直接保存在inode中以便更快地查找，如果目标路径名较长则分配一个数据块来保存。
  • 设备文件、FIFO和socket等特殊文件没有数据块，设备文件的主设备号和次设备号保存在inode中。 ([View Highlight](https://read.readwise.io/read/01hfhhyzgerjbzg90f3yqzd60k))

