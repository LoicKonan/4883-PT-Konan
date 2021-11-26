## Assignment 28 - Power of Cryptography

### Loic Konan

#### Description
>
> 
> **This problem involves the efficient computation of integer roots of numbers**.<br>
>
> Given an integer **n ≥ 1** and **an integer p ≥ 1**
>
> - write a program that determines **√n p**, the **positive n-th root of p**.
>
> In this problem, given such integers **n and p, p will always be of the form k n for an integer k**<br>
>
> **Note: (this integer is what your program must find)**.
>
> Equation:
>
> **k^n = p**
>
> **ln k^ n = ln p**
>
> **n ln k^n = ln p**
>
> **which is simply: ln k = ln p**
>
> **or:**
>
> - **ln k = (ln p) / (n)**  
> - thus **k** is: **k = e ^((ln p)/n)**
>
### Files

|   #   | File                 | Description           |
| :---: | -------------------- | --------------------- |
|   1   | [Banner](Banner)     | Banner for Assignment |
|   2   | [P113.pdf](P113.pdf) | The Problem           |
|   3   | [main.cpp](main.cpp) | Solution              |
|   4   | [infile](infile)     | 1st sample file       |
|   5   | [infile2](infile2)   | 2nd sample file       |

### Instructions

- Complied using **VScode** and **C++ 17**
- main.exe < infile
