# 852. Peak Index in a Mountain Array  

Let's call an array A a mountain if the following properties hold:  

* A.length >= 3
* There exists some 0 < i < A.length - 1 such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1]  

Given an array that is definitely a mountain, return any i such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1].

**Example 1:**  

    Input: [0,1,0]
    Output: 1

**Example 2:**  

    Input: [0,2,1,0]
    Output: 1

**Note:**

1. 3 <= A.length <= 10000
2. 0 <= A[i] <= 10^6
3. A is a mountain, as defined above.

---
## Result  

Runtime: **16 ms**, faster than 67.73% of C++ online submissions for Peak Index in a Mountain Array.  
Memory Usage: **9.4 MB**, less than 96.43% of C++ online submissions for Peak Index in a Mountain Array.
