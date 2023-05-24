---
title: partial derivative
uid: 202301310932
aliases: [偏导数]
tags: Math 
from: 
---
# partial derivative
## 定义

设函数 $z = f(x,y)$ 在点 $(x_0,y_0)$ 的某一邻域内有定义，如果 $$\lim\limits_{\Delta x\to 0}\frac{f(x_0 + \Delta x,y_0)-f(x_0,y_0)}{\Delta x}$$ 存在，则称此极限为函数 $z = f(x,y)$ 在点 $(x_0,y_0)$处对x的偏导数，记为 $f'_x(x_0,y_0)$ 或 $\frac{\partial f(x_0,y_0)}{\partial y}$

## Definition

like ordinary derivatives, the partial derivative is defined as a limit. Let U be an open subset of $R^n$ and $f:U \to R$ a function. The partial derivative of f at the point $\textbf{a} = (a_1,\cdots,a_n) \in U$ with respect to the *i*-th variable $x_i$ is defined as $$\begin{aligned}
\frac{\partial}{\partial x_i}f(\textbf{a}) &= \lim_{h\to 0}\frac{f(a_1,\cdots,a_{i-1},a_i+h,a_{i+1},\cdots,a_n)-f(a_1,\cdots,a_i,\cdots,a_n)}{h} \\
&=\lim_{h\to 0}\frac{f(\textbf{a} + he_i)-f(\textbf{a})}{h}
\end{aligned}$$

