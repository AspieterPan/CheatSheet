---
title: Bivariate Normal Distribution
uid: 202304141359
aliases: []
tags: []
from:
---

The bivariate normal distribution, also known as the two-dimensional normal distribution, is a continuous probability distribution defined on a two-dimensional plane, with the probability density function being the product of two [[Normal Distribution]]. In the bivariate normal distribution, the random variables follow a bell-shaped curve in both directions and have linear correlation between them.

$$f_{X,Y}(x,y) = \frac{1}{2\pi\sigma_X\sigma_Y\sqrt{1-\rho^2}}\exp\left(-\frac{1}{2(1-\rho^2)}\left[\frac{(x-\mu_X)^2}{\sigma_X^2}-2\rho\frac{(x-\mu_X)(y-\mu_Y)}{\sigma_X\sigma_Y}+\frac{(y-\mu_Y)^2}{\sigma_Y^2}\right]\right)$$

$$E[X] = \mu_X, E[Y] = \mu_Y$$

$$\text{Cov}[X,Y] = \rho\sigma_X\sigma_Y$$
