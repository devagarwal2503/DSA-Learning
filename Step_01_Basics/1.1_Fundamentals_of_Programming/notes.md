# 📖 Step 1.1 — Fundamentals of Programming

> **Topics:** Flowcharts, Pseudocode, Complexity Analysis (Time & Space)

---

## 🔑 Key Concepts

### 1. Flowcharts & Algorithms
- **Algorithm**: Step-by-step procedure to solve a given computational problem.
- **Flowchart symbols**:
  - Oval: Start / End
  - Parallelogram: Input / Output
  - Rectangle: Process / Operation
  - Diamond: Decision / Condition (if-else / loops)

### 2. Time & Space Complexity (Big-O Notation)
- **Big-O ($O$)**: Upper bound / Worst-case time complexity.
- **Big-Omega ($\Omega$)**: Lower bound / Best-case time complexity.
- **Big-Theta ($\Theta$)**: Tight bound / Average-case time complexity.

| Complexity | Name | Common Examples |
|:---:|:---:|---|
| $O(1)$ | Constant | Array indexing, basic math operations |
| $O(\log N)$ | Logarithmic | Binary search, GCD (Euclidean) |
| $O(N)$ | Linear | Single loop through array of size $N$ |
| $O(N \log N)$ | Linearithmic | Merge Sort, Quick Sort (avg) |
| $O(N^2)$ | Quadratic | Nested loops, Bubble Sort, Selection Sort |
| $O(2^N)$ | Exponential | Recursive Fibonacci, Subsets generation |
| $O(N!)$ | Factorial | Generating all permutations |

---

## 💡 Notes & Insights
- Always analyze constraints: $N \le 10^8$ operations per second is typically the limit on modern online judges (~1 sec time limit).
  - $N \le 10^5 \implies O(N)$ or $O(N \log N)$
  - $N \le 10^3 \implies O(N^2)$
  - $N \le 20 \implies O(2^N)$ or $O(N!)$
