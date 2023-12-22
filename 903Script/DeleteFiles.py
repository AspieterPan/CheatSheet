#!/usr/bin/env python

import os
import re


def delete_files_matching_pattern(directory, pattern):
    # 切换到指定目录
    os.chdir(directory)

    # 获取目录中的所有文件
    files = os.listdir()

    # 编译正则表达式
    regex = re.compile(pattern)

    # 删除匹配正则表达式的文件
    for file in files:
        if regex.search(file):
            file_path = os.path.join(directory, file)
            os.remove(file_path)
            print(f"Deleted: {file_path}")


if __name__ == "__main__":
    # 请替换为你的目录和正则表达式
    directory_to_clean = "/Users/xiaobai/Library/Mobile Documents/iCloud~md~obsidian/Documents/CheatSheet/001Inbox"
    regex_pattern = r" 2\.md$"

    # 调用删除函数
    delete_files_matching_pattern(directory_to_clean, regex_pattern)
