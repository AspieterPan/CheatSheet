# LinuxCommands

- [LinuxCommands](#linuxcommands)
  - [HELP](#help)
    - [man](#man)
    - [tldr](#tldr)
  - [FILES AND MOVING](#files-and-moving)
    - [ls](#ls)
    - [tree](#tree)
    - [mkdir](#mkdir)
    - [mv](#mv)
    - [rm](#rm)
    - [touch](#touch)
  - [FIND AND MODIFY](#find-and-modify)
    - [find](#find)
    - [fd (better find)](#fd-better-find)
    - [grep](#grep)
    - [rg (better grep)](#rg-better-grep)
    - [sed](#sed)
    - [awk](#awk)

## HELP

### man

### tldr

## FILES AND MOVING

### ls

### tree

### mkdir

### mv

### rm

### touch

## FIND AND MODIFY

### find

```bash
 Find all directories named src
find . -name src -type d
 Find all python files that have a folder named test in their path
find . -path '*/test/*.py' -type f
 Find all files modified in the last day
find . -mtime -1
 Find all zip files with size in range 500k to 10M
find . -size +500k -size -10M -name '*.tar.gz'

 Delete all files with .tmp extension
find . -name '*.tmp' -exec rm {} \;
 Find all PNG files and convert them to JPG
find . -name '*.png' -exec convert {} {}.jpg \;
```

### fd (better find)

### grep

### rg (better grep)

```bash
 Find all python files where I used the requests library
rg -t py 'import requests'
 Find all files (including hidden files) without a shebang line
rg -u --files-without-match "^\!"
 Find all matches of foo and print the following 5 lines
rg foo -A 5
 Print statistics of matches (# of matched lines and files )
rg --stats PATTERN
```

### sed

### awk
