---
DateCreated: 2024-01-25T17:07
DateModified: 2024-01-25T17:07
---
# SQL-Recursive-CTE

- `WITH tname as (SELECT init-selector UNION ALL SELCT recur-selector)`
	- Init
		- create a table by init-selector
	- Recur
		- execute recur-selector to insert records into t while see records inserted in last step as t in the recur-selector
	- Terminal
		- use LIMIT constrain the recur-selector execute times
		- use WHERE determine terminal condition
