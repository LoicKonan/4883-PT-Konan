## Assignment 15 - 10023

### Loic Konan

#### Description

> integer sqrt(integer n)  <br>
> { <br>
>   integer a, b, m; <br>
>   a:= 1; <br>
>   b:= n; <br>
>   loop  <br>
>   { <br>
>       m:= (a+b) / 2; <br>
>       if (m = a || m = b) return m; <br>
>       if (m*m > n) a:= m; <br>
>       else b:= m;>b <br>
>   } <br>
> } <br>
> 
### Files

|   #   | File                 | Description           |
| :---: | -------------------- | --------------------- |
|   1   | [Banner](Banner)     | Banner for Assignment |
|   2   | [10023.pdf](.pdf)    | The Problem           |
|   3   | [main.cpp](main.cpp) | Solution              |
|   4   | [infile](infile)     | 1st sample file       |
|   5   | [infile2](infile2)   | 2nd sample file       |

### Instructions

- Complied using **VScode** and **C++ 17**
- main.exe < infile
