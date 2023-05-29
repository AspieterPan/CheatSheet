```dataview
task
From "008Todo"
where !contains(file.Tags, "python")
group by file.name
```
