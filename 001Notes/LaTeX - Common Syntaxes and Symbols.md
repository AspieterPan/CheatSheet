---
DateCreated: 2024-01-17T16:43
DateModified: 2024-06-05T21:33
---
# LaTeX - Common Syntaxes and Symbols

Super:: [[LaTeX]]

## 希腊字母
---
$$\alpha, \beta, \gamma, \delta, \epsilon, \varepsilon, \zeta, \eta, \theta, \vartheta, \iota, \kappa, \lambda, \mu, \nu, \xi, o, \pi, \varpi, \rho, \varrho, \sigma, \varsigma, \tau, \upsilon, \phi, \varphi, \chi, \psi, \omega$$

$$\Gamma, \Delta, \Theta, \Lambda, \Xi, \Pi, \Sigma, \Upsilon, \Phi, \Psi, \Omega$$

## 段落
---
$$
\begin{align}
This is first &line \\
This is seconde &line \\
...
\end{align}
$$

在 'align' 定义的段落中，具有以下性质
1. 居中对齐
2. 使用 '\\' 来作为换行符
3. 每一行中用 '&' 来进行对齐
4. 每一行后面自动加上 tag（如果不想要 tag，使用 'align*')

## Matrix
---
$$
\begin{bmatrix}
    a & b \\
    c & d \\
\end{bmatrix}
$$
