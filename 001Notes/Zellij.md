---
DateCreated: 2024-01-18T17:20
DateModified: 2024-06-05T21:56
tags: 
  - 计算机/开发环境/命令行工具
---
# Zellij

X:: [[Tmux]]

- rewrite [[Tmux]] by Rust
- more friendly keymaps

## Bugs
---
- Session exit when disconnect ssh by `exit`
	- Fix: disconnect ssh by printing `<Enter>~.` instead of `exit`
	- Notes: Tmux doesn't have this issue
