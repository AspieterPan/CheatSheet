---
title: multivariable function composition derivative
Uid: 202301311147
Aliases: 多元复合求导
tags: 数学
From: 
---
# multivariable function composition derivative

## Define
---

The derivative of a multivariable function composition can be found using the chain rule. Let's consider a function f(x,y) and another function g(u,v) such that u = g(x,y) and v = h(x,y). Then the composite function F(x,y) = g(h(x,y)) can be written as F(u,v) = g(u,v). 

To find the partial derivative of F with respect to x, we use the chain rule as follows:

$$ \frac{\partial F}{\partial x} = \frac{\partial g}{\partial u} \cdot \frac{\partial u}{\partial x} + \frac{\partial g}{\partial v} \cdot \frac{\partial v}{\partial x} $$

Similarly, to find the partial derivative of F with respect to y, we use the chain rule as follows:

$$\frac{\partial F}{\partial y} = \frac{\partial g}{\partial u} \cdot \frac{\partial u}{\partial y} + \frac{\partial g}{\partial v} \cdot \frac{\partial v}{\partial y}$$

Note that in these expressions, we are taking partial derivatives of g and h with respect to their variables u and v, respectively. 

In general, for a multivariable composition of n functions, the chain rule can be applied repeatedly to find all the partial derivatives of the composite function.

if $\mu = \phi(t),\nu = \psi(t),z = f[\phi(t),\psi(t)]$ , then
$$\frac{dz}{dt} = \frac{\partial z}{\partial \mu}\frac{d\mu}{dt} + \frac{\partial z}{\partial \nu}\frac{\partial \nu}{\partial t}$$


多变量函数复合的导数可以使用链式法则来求解。考虑一个函数f(x,y)和另一个函数g(u,v)，使得u = g(x,y)和v = h(x,y)。那么复合函数F(x,y) = g(h(x,y))可以写成F(u,v) = g(u,v)。

为了找到F关于x的偏导数，我们使用链式法则如下：

$$ \frac{\partial F}{\partial x} = \frac{\partial g}{\partial u} \cdot \frac{\partial u}{\partial x} + \frac{\partial g}{\partial v} \cdot \frac{\partial v}{\partial x} $$

类似地，为了找到F关于y的偏导数，我们使用链式法则如下：

$$\frac{\partial F}{\partial y} = \frac{\partial g}{\partial u} \cdot \frac{\partial u}{\partial y} + \frac{\partial g}{\partial v} \cdot \frac{\partial v}{\partial y}$$

请注意，在这些表达式中，我们正在对其变量u和v进行对g和h的偏导数。

一般来说，对于n个函数的多变量复合，可以重复应用链式法则来找到所有复合函数的偏导数。

如果 $\mu = \phi(t),\nu = \psi(t),z = f[\phi(t),\psi(t)]$，那么
$$\frac{dz}{dt} = \frac{\partial z}{\partial \mu}\frac{d\mu}{dt} + \frac{\partial z}{\partial \nu}\frac{\partial \nu}{\partial t}$$