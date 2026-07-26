# 📖 Mathematics & Logic Building Formulas Reference

This file documents the key mathematical principles, formulas, and optimization strategies learned during the logic-building phase. Using direct formulas avoids loop iteration overhead, handles edge cases gracefully, and reduces time complexity from $O(N)$ or $O(M)$ to $O(1)$.

---

## 1. Divisibility Check (Odd or Even)

*   **Problem Context:** Checking if an integer $N$ is odd or even.
*   **The Modulo Approach:**
    *   **Formula:** `n % 2 == 0` (even) or `n % 2 != 0` (odd).
    *   **How it works:** The modulo operator `%` calculates the remainder of division. If divided by 2 has no remainder, it is even.
*   **The Bitwise Optimization (Bonus):**
    *   **Formula:** `(n & 1) == 0` (even) or `(n & 1) == 1` (odd).
    *   **How it works:** In binary, even numbers always end with `0` and odd numbers end with `1`. Performing a bitwise AND with `1` masks everything except the least significant bit, which is faster at hardware level than division.

---

## 2. Sum of First N Natural Numbers (Arithmetic Progression Sum)

*   **Problem Context:** Finding the sum of numbers from $1$ to $N$ (used in *Reverse Coding*).
*   **The Formula:**
    $$\text{Sum} = \frac{N \times (N + 1)}{2}$$
*   **How it helped:** Instead of running a loop $N$ times ($O(N)$ time), this formula calculates the sum in a single step ($O(1)$ time).
*   **Gotcha / Edge Case:** For $N = 0$, the formula still results in $0$, but handling it explicitly prevents potential overflow or undefined behavior for negative bounds depending on context.

---

## 3. Sum of Squares of First N Natural Numbers

*   **Problem Context:** Summing $1^2 + 2^2 + 3^2 + \dots + N^2$.
*   **Brute Force ($O(N)$):**
    *   Iterate with a for-loop: `sum += (i * i)`.
    *   *Real-world performance:* Took **0.02 seconds**.
*   **The Formula ($O(1)$):**
    $$\text{Sum} = \frac{N \times (N + 1) \times (2N + 1)}{6}$$
*   **How it helped:** Avoids loop overhead completely.
    *   *Real-world performance:* Optimized time to **0.01 seconds** (a 50% performance increase!).

---

## 4. Nearest Multiple (Closest Number)

*   **Problem Context:** Finding the number closest to $N$ that is divisible by $M$. If there are two such numbers, choose the one with the maximum absolute value.
*   **The Iterative Trap:**
    *   Simulating/searching values around $N$ in a fixed range (like `[n - 5, n + 5]`) using loops.
    *   *Why it fails:* It doesn't scale if $M > 5$, and is extremely difficult to coordinate cleanly for mixed signs (positives and negatives).
*   **The Quotient Formula:**
    1.  Find the integer division quotient:
        $$q = \frac{N}{M}$$
    2.  Find the lower bound multiple:
        $$\text{num1} = M \times q$$
    3.  Find the upper bound multiple (adjusting direction based on signs of $N$ and $M$):
        $$\text{num2} = \begin{cases} M \times (q + 1) & \text{if } N \times M > 0 \\ M \times (q - 1) & \text{otherwise} \end{cases}$$
    4.  Compare absolute distances to $N$:
        $$\text{dist1} = |N - \text{num1}|, \quad \text{dist2} = |N - \text{num2}|$$
        Return the closer value. If distances are equal, `num2` is returned since quotient truncation rounds toward zero, guaranteeing that `num2` has the larger absolute value.

---

## 5. Opposite Face of a Dice

*   **Problem Context:** Finding the number on the opposite face of a standard 6-sided dice given the top face value $N$.
*   **The Array Mapping Approach:**
    *   **Logic:** Predefine a reverse array of size 6: `[6, 5, 4, 3, 2, 1]`. Retrieve `array[n-1]`.
*   **The Constant Arithmetic Approach ($O(1)$):**
    *   **Logic:** On any standard 6-sided dice, the sum of opposite faces is always exactly $7$.
    *   **Formula:**
        $$\text{Opposite Face} = 7 - N$$
    *   **How it helped:** Replaces array lookup/storage overhead with a simple, direct subtraction operation.

---

## 6. Digit Extraction, Reversal, & Sum

*   **Problem Context:** Extracting individual digits of a number $N$ to sum them up, reverse them, or check properties.
*   **The Modulo-Division Loop Approach:**
    *   **Formula/Logic:**
        1.  Extract the last digit using modulo 10: `digit = N % 10`.
        2.  For **Summing**: `sum += digit`.
        3.  For **Reversing**: Shift the current reversed number left by one decimal place and add the digit: `rev = (rev * 10) + digit`.
        4.  Truncate the last digit using integer division by 10: `N = N / 10`.
        5.  Repeat in a loop while `N > 0`.
    *   **How it helped:** Shifting decimal places using multiplication by 10 allows building numbers dynamically from right to left in $O(\log_{10}(N))$ time.

---

## 7. Primality Testing (Checking for Prime Numbers)

*   **Problem Context:** Checking if an integer $N$ is prime (divisible only by 1 and itself).
*   **The Native Linear Search Approach ($O(N)$):**
    *   **Logic:** Loop from $2$ to $N - 1$ and check if any number divides $N$ evenly.
*   **The Square Root Space Reduction ($O(\sqrt{N})$):**
    *   **Formula/Logic:**
        1.  Divisors of $N$ come in symmetric pairs $(a, b)$ such that $a \times b = N$.
        2.  If both $a$ and $b$ were greater than $\sqrt{N}$, then $a \times b$ would be greater than $N$ (a contradiction).
        3.  Therefore, at least one divisor in any factor pair must be less than or equal to $\sqrt{N}$.
        4.  Thus, if we find no divisors in the range $[2, \sqrt{N}]$ (checked programmatically using `i * i <= n`), then no divisors exist anywhere, and $N$ is prime.
    *   **How it helped:** Reduces the loop boundary exponentially from $N$ to $\sqrt{N}$, making it extremely fast for large values of $N$.

---

## 8. Exponential Equation Solver (Power of Another Number)

*   **Problem Context:** Checking if an integer $Y$ is a power of another integer $X$ ($X^P = Y$).
*   **The Iterative Trap ($O(\log_X(Y))$):**
    *   **Logic:** Start at 1 or $X$, and multiply by $X$ in a loop until the result equals or exceeds $Y$.
    *   *Why it is sub-optimal:* Although it works, it is slow when $Y$ is large or when repeated operations are performed, leading to Time Limit Exceeded (TLE) in online judges.
*   **The Logarithmic Formula Approach ($O(1)$):**
    *   **Logic:**
        1.  Take the logarithm on both sides of the equation $X^P = Y$:
            $$\log(X^P) = \log(Y) \implies P \times \log(X) = \log(Y) \implies P = \frac{\log(Y)}{\log(X)}$$
        2.  Compute $P = \frac{\log(Y)}{\log(X)}$ using standard `log()` or `log10()`.
        3.  Check if $P$ is an integer by comparing it to its rounded value within a small floating point tolerance (e.g. $10^{-10}$):
            $$\left| P - \text{round}(P) \right| < 10^{-10}$$
    *   **How it helped:** Solves the relation in constant $O(1)$ time, eliminating all loops.

---

## 9. Overlapping Rectangles (Boundary Intersection vs. Non-Overlap Separation)

*   **Problem Context:** Determining whether two axis-aligned rectangles overlap, given their top-left vertices $(L_1, L_2)$ and bottom-right vertices $(R_1, R_2)$.
*   **The Over-Engineering Trap:**
    *   Trying to simulate the rectangles in a 2D grid/array, or calculating all intersection coordinates.
    *   *Why it fails:* Complex, uses large/infinite memory, and is highly prone to coordinate off-by-one errors.
*   **The Non-Overlap Separation Logic ($O(1)$):**
    *   **Core Principle:** It is much easier to define the conditions where two rectangles do **not** overlap. Two rectangles are separate if and only if one of the following is true:
        1.  **Rect 1 is to the left of Rect 2:** $R_1[x] < L_2[x]$
        2.  **Rect 1 is to the right of Rect 2:** $L_1[x] > R_2[x]$
        3.  **Rect 1 is above Rect 2:** $R_1[y] > L_2[y]$ (assuming standard coordinates where $Y$ decreases downwards)
        4.  **Rect 1 is below Rect 2:** $L_1[y] < R_2[y]$
    *   **Formula:** If any of these four separation checks are true, return `false`. Otherwise, they must overlap, so return `true`.
    *   **How it helped:** Simplifies checking overlap to just four boundary comparisons, running in $O(1)$ time.

---

## 10. Factorial Computation (Iterative vs. Recursive Logic)

*   **Problem Context:** Calculating the product of all positive integers less than or equal to $N$ ($N! = N \times (N-1) \times \dots \times 1$).
*   **The Iterative Loop Approach ($O(N)$ time, $O(1)$ space):**
    *   **Logic:** Initialize a variable `fact = 1` and loop from $1$ to $N$, multiplying the variable by the iterator.
*   **The Recursive Paradigm ($O(N)$ time, $O(N)$ call stack space):**
    *   **Logic:**
        1.  Factorial is mathematically defined as:
            $$N! = N \times (N - 1)!$$
        2.  Base case is $0! = 1$ (returns 1 when `N == 0`).
        3.  Recursive step returns `N * factorial(N - 1)`.
    *   **How it helped:** Reduces source code size and implements a clean mathematical representation using call stacks, serving as a fundamental introduction to recursion.

---

## 11. Search Space Reduction for Equations (Pair Cube Count)

*   **Problem Context:** Finding the number of integer pairs $(a, b)$ such that $a^3 + b^3 = N$, where $a \ge 1$ and $b \ge 0$.
*   **The Quadratic Iterative Trap ($O(N^2)$ time):**
    *   **Logic:** Run nested loops for $a$ and $b$ from $1$ to $N$ to find matching pairs.
    *   *Why it is invalid:* Highly inefficient; for large values of $N$ (e.g. $10^9$), it results in TLE as the execution scales quadratically.
*   **Equation Rearrangement & Cube Root Bounding ($O(\sqrt[3]{N})$ time):**
    *   **Logic:**
        1.  Rearrange the equation:
            $$b^3 = N - a^3$$
        2.  Identify boundaries: Since $b \ge 0$, then $a^3 \le N$, meaning $a$ is strictly bounded by:
            $$a \le \sqrt[3]{N}$$
        3.  Iterate $a$ from $1$ up to $\sqrt[3]{N}$ (using `cbrt(N)`).
        4.  For each $a$, compute `diff = N - a^3`. If the cube root of `diff` (truncated to integer) cubed is equal to `diff` (i.e. `cbrt(diff)^3 == diff`), it represents a valid perfect cube, so we increment the pair counter.
    *   **How it helped:** Reduces the number of checks from $O(N^2)$ to just $O(\sqrt[3]{N})$ (e.g. for $N = 1000$, checking only 10 values instead of $1,000,000$).







