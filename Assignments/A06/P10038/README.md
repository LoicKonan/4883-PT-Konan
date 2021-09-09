## Assignment 6 - Jolly Jumpers

### Loic Konan

#### Description

Hold all of the input in an array where **a[i] is the ith number**. Also create an array of booleans where **b[i]** is true if a difference of i has appeared somewhere in the sequence.<br>

For each **i from 0 to n-2**, check **if b[a[i] - a[i+1]] is true**. If it is, then output **"Not jolly"**. Otherwise, **set it to true**.<br>
If you iterate through the entire sequence and find no repeated differences, **output "Jolly"**.

### Files

|   #   | File                     | Description           |
| :---: | ------------------------ | --------------------- |
|   1   | [Banner](Banner)         | Banner for Assignment |
|   2   | [P10038.pdf](P10038.pdf) | The Problem           |
|   3   | [main.cpp](main.cpp)     | Solution              |
|   4   | [infile](infile)         | 1st sample file       |
|   4   | [infile2](infile2)       | 2nd sample file       |

### Instructions

- Complied using **VScode** and **C++ 17**
- main.exe < infile
