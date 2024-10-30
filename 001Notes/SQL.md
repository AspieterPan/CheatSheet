---
DateCreated: 2024-01-22T16:51
DateModified: 2024-01-22T17:02
tags: 
- 计算机/编程语言/SQL
---
# SQL

## Functions
---
### Ntile

```sql
ntile(num) OVER (
	PARTITION BY expr
	ORDER BY field [DESC]
)
```

- divide records to {num} bucket, give each bucket a number
	- e.g `SELECT ntile(10) OVER(ORDER BY grade DESC) FROM students`
		- which divide the students by grade
			- first 10% grade students would be given "1", and second 10% grade students would be given "2"
			- if you want select all students whose grade in 4th decile(mean grade from 30% to 40%), you can use `WHERE ntile = 4`
		- default `ntile` divide all students
			- `PARTITION BY class` would divide every class's students into several bucket
