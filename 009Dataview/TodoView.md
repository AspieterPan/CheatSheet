```dataview
task
from "008Todo"
where !contains(file.tags, "python")
group by file.name
```
