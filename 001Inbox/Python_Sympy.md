---
uid: 202305242228
aliases: sympy,Sympy
tags: Python 
from: 
---
# Python_Sympy

## Feature
---

### 求定积分与不定积分

```python
import sympy as sp

x = sp.Symbol('x')
f = x**2 + 2*x - 1

# 求不定积分
integral1 = sp.integrate(f, x)

# 求从 1 到 2 的定积分
integral2 = sp.integrate(f, (x, 1, 2))

print(integral1) # x**3/3 + x**2 - x
print(integral2) # 13/3

```

### 函数求值

```python
import sympy as sp

x = sp.Symbol('x')
f = x**2

result = f.subs(x, 3)

print(result) # 9

```