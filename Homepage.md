---
DateCreated: 2024-03-22T09:49
DateModified: 2024-09-09T23:29
---
# Homepage

## Recently Modified

```dataview
List 
from ""
where file.name != "Homepage" and file.folder != "002Diary"
sort file.mtime DESC
limit 7
```

## Projects

详细请看: [[Projects Database]]

```dataview
Table Status, Process, Priority
From "101Projects"
Where Status!="Done" and Name!="Projects Database"
Sort Priority Desc
```
