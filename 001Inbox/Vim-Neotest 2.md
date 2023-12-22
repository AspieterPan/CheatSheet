---
DateCreated: 2023-12-21T21:28
DateModified: 2023-12-21T22:05
Link: https://github.com/nvim-neotest/neotest#supported-runners
---
# Vim-Neotest

A framework for interacting with tests within NeoVim.

## Theory
---
- Testing frameworks
	- CLI commands to auto test program
	- i.e
		- pytest is a test framework of python
		- `pytest ./test_func.py` can output all the results of assert in the file
- Neotest
	- is a NeoVim plugin to use these testing frameworks within Neovim.
- Neotest Adapter
	- Other plugins have some default configs about runner
	- i.e
		- neotest-python is a adapter about python

## How to use
---
1. Install [[LazyVim]]
2. type command `:LazyVim Extra`, find the "test" line and type 'x', which will install the Neotest plugin
3. There are some languages already have configs by LazyVim, such as Python, Go, Rust, so just open them in Extra and you can use them in Neotest
	1. If LazyVim don't have the configuration about the language, check the [supported-runners](https://github.com/nvim-neotest/neotest#supported-runners), config it by yourself
4. RTFM of the testing framework when you want writing some test units
	1. If it showed "no tests found" when config is right, check if there is "test" in your file's name.
	2. Modify the function `is_test_file` in the config to change the logic what kind of file could be a test file
