---
DateCreated: 2023-12-21T21:28
DateModified: 2024-05-31T11:24
Link: https://github.com/nvim-neotest/neotest#supported-runners
---
# Vim-Neotest

A framework for interacting with tests within NeoVim.

## Theory
---
- Testing frameworks
	- CLI commands to auto-test the program.
	- i.e
		- Pytest is a test framework for python
		- `pytest ./test_func.py` can output all the results of assert in the file
- Neotest
	- is a NeoVim plugin for using testing frameworks within Neovim.
- Neotest Adapter
	- Other plugins have some default configs about runners.
	- i.e
		- Neotest-Python offers an adapter of Python.
	- If not, you should set your own adapter

## How to use
---
1. Install [[LazyVim]]
2. type the command `:LazyExtras`, find the "test" line, and type 'x', which will install the Neotest plugin
3. Some languages, such as Python, Go, and Rust, already have configs by LazyVim, so just open them in `:LazyExtras`, and you can use them in Neotest.
	1. If LazyVim doesn't have the configuration about the language, check the [supported-runners](https://github.com/nvim-neotest/neotest#supported-runners), and config it by yourself
4. RTFM of the testing framework when you want to write some test units
	1. If it shows "no tests found" when the config is right, check if there is "test" in your file's name.
	2. Modify the function `is_test_file` in the config to change the logic of what kind of file could be a test file
