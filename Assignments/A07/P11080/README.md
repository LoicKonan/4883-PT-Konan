## Assignment 7 - Place The Guards

### Loic Konan

#### Description

"Help the king to find the **Minimum** Number of guards needed to guard all the junctions and streets of his country."

- on approach for bicoloring **(determine the graph is bipartite or not )** use **BFS** method.
- If Its not BiGraph print -1;

- **Example that had three calls. We ignore the -1's:**

  > - Call 1 => [ 1  0  1 -1 -1] (smallest set is 0 or 1 guard )
  > - Call 2 => [-1 -1 -1  1 -1] (smallest set is 1  or 1 guard)
  > - Call 3 => [-1 -1 -1 -1  1] (smallest set is 1  or 1 guard)
  > - **1 + 1 + 1 = 3 (correct answer)**

- **Example is 5 vertices 0 edges:**
  
  > - Call 1 => [ 1 -1 -1 -1 -1] (each call has a 1 for the vertex that needs a guard)
  > - Call 2 => [-1  1 -1 -1 -1]
  > - Call 3 => [-1 -1  1 -1 -1]
  > - Call 4 => [-1 -1 -1  1 -1]
  > - Call 5 => [-1 -1 -1 -1  1]
​  > - **1 + 1 + 1 + 1 + 1 = 5**

### Files

|   #   | File                     | Description                 |
| :---: | ------------------------ | --------------------------- |
|   1   | [Banner](Banner)         | Banner for Assignment       |
|   2   | [P11080.pdf](P11080.pdf) | The Problem                 |
|   3   | [main.cpp](main.cpp)     | Solution                    |
|   4   | [geek.cpp](geek.cpp)     | Helper code from Dr.Griffin |
|   5   | [infile](infile)         | 1st sample file             |
|   6   | [infile2](infile2)       | 2nd sample file             |
|   7   | [infile3](infile3)       | 3rd sample file             |
|   8   | [infile4](infile4)       | 4th sample file             |
|   9   | [infile5](infile5)       | 5th sample file             |
|  10   | [infile6](infile6)       | 6th sample file             |

### Instructions

- Complied using **VScode** and **C++ 17**
- main.exe < infile
