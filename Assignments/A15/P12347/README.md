## Assignment 15 - Binary Search Tree

### Loic Konan

#### Description

>
> <img src = "pic.png">
>
> - **Pre-order:** **50 30 24 5 28 45 98 52 60** <br>
> - **Post-order:** **5 28 24 45 30 60 52 98 50** <br>
>
>
> This program takes in a **pre ordered output** of a _binary search tree_ and then display the **post order output**.
>
>
> **Algorithm Postorder(tree):**<br>
> **1.** Traverse the left subtree, i.e., call Postorder(left-subtree)<br>
> **2.** Traverse the right subtree, i.e., call Postorder(right-subtree)<br>
> **3.** Visit the root.
>
>
> Implemented **2 version of the insert function** in order to see which one is **faster**:
>
> - **Recursive Version.**
> - **Iterative Version**
>
> **After multiple iterations, and analyzing the results**
> **I found that the iterative way is faster than the recursive way by a factor of at least 1 second.**
>
>
### Files

|   #   | File                           | Description               |
| :---: | ------------------------------ | ------------------------- |
|   1   | [Banner](Banner)               | Banner for Assignment     |
|   2   | [P12347.pdf](P12347.pdf)       | The Problem               |
|   3   | [main.cpp](main.cpp)           | Solution                  |
|   4   | [infile](infile)               | 1st sample file           |
|   5   | [infile2](infile2)             | 2nd sample file           |
|   6   | [Timer.hpp](Timer.hpp)         | To calculate the Duration |
|   7   | [termcolor.hpp](termcolor.hpp) | To Display color          |

### Instructions

- Complied using **VScode** and **C++ 17**
- main.exe < infile

### Sources

- <https://www.programiz.com/dsa/tree-traversal>
