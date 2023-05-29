#!/usr/bin/env python3
import os

prop = "tags"
name = "Math"
files = """
002Diary/2023-05-24.md
002Diary/2023-05-25.md
"""
# file 通过 obsidian 的搜索结果可以获取

# TODO:需要批量修改和删除的功能


def _has_front_matter(content):
    if content[0].strip() != "---":
        content.insert(0, "---\n")
        content.insert(0, "---\n")
        return False
    return True


def _findandchange(content):
    global prop
    global name
    for index, line in enumerate(iterable=content[1:], start=1):
        if line.strip() == "---":
            return False
        if line.strip().startswith(prop + ":"):
            content[index] = _appendProperty(line)
            return True


def _appendProperty(line):
    global prop
    global name
    if line.strip().endswith(prop + ":"):
        line = line.strip() + " " + name + "\n"
    elif name not in line:
        line = line.strip() + "," + name + "\n"
    return line


def _addProperty(content):
    global prop
    global name
    content.insert(1, prop + ": " + name + "\n")


if _name_ == "_main_":
    # 处理每个文件
    for file in files.strip().split("\n"):
        file_path = os.path.join(os.getcwd(), file.strip())

        # 读取文件内容
        with open(file_path, "r") as f:
            content = f.readlines()

        # 检查是否有 FrontMatter, 如果没有，则添加
        _has_front_matter(content)

        # 添加属性
        if _findandchange(content) == False:
            _addProperty(content)

        # 写入修改后的内容
        with open(file_path, "w") as f:
            f.writelines(content)
