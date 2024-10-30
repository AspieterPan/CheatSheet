---
Aliases: 
tags: 
- 计算机/编程语言/Python
- Cheatsheet
DateCreated: 2024-01-17T16:43
DateModified: 2024-05-31T11:29
---
# Python_CheatSheet

Super:: [[Python]]

## brew 指定版本

```bash
brew link python@3.11
brew link --overwrite --dry-run python@3.11
brew link pip3.11
```

## @property

Python 中 @property 用法,
```python
class Student():
	@property
    def name(self):
		# 被 @property 修饰的函数变成 getter， 函数名变成成员变量
	    return self._name

	@name.setter
	def set_name(self, name):
		self._name = name

	@name.deleter
	def del_name(self):
		del self._name

xiaoming = Student()
# 使用 @property 后， 像使用成员变量一样去访问被修饰的函数
xiaoming.name = "xiaoming"
