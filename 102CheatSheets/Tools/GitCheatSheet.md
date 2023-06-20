# GitCheatSheet

## 常用命令
---
```bash
# 修改上一次的提交，不会产生新的提交
git commit --amend

# 设置 git 的编辑器为 neovim
git config --global core.editor nvim

# 设置 pull 默认为 rebase
git config --global --add pull.rebase true

# 查看 git 当前所有设置
git config --global -l
```

## Git 清理
---
source:: https://juejin.cn/post/7024922528514572302
- [ ] 使用 [BFG](https://rtyley.github.io/bfg-repo-cleaner/) 工具