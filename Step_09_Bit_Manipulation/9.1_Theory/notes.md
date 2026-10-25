# 📖 Step 9.1 — Bit Manipulation: Theory

> **Topics:** Binary number system, 1's & 2's Complement, Bitwise Operators, Bit Tricks

---

## 🔑 Key Concepts

### 1. Bitwise Operators

| Operator | Symbol | Meaning | Example ($a=5=101_2, b=3=011_2$) |
|:---:|:---:|:---|:---|
| AND | `&` | 1 if both bits are 1 | $5 \ \& \ 3 = 1 \ (001_2)$ |
| OR | `\|` | 1 if at least one bit is 1 | $5 \ \| \ 3 = 7 \ (111_2)$ |
| XOR | `^` | 1 if bits differ (odd number of 1s) | $5 \ \hat{} \ 3 = 6 \ (110_2)$ |
| NOT | `~` | Inverts all bits | $\sim 5 = -6$ (2's complement) |
| Left Shift | `<<` | Multiplies by $2^k$: `x << k` | $5 \ll 1 = 10$ |
| Right Shift | `>>` | Divides by $2^k$: `x >> k` | $5 \gg 1 = 2$ |

### 2. Crucial Bit Tricks
- **Check if $i$-th bit is set**: `(n & (1 << i)) != 0` or `((n >> i) & 1) == 1`
- **Set the $i$-th bit**: `n = n | (1 << i)`
- **Clear the $i$-th bit**: `n = n & ~(1 << i)`
- **Toggle the $i$-th bit**: `n = n ^ (1 << i)`
- **Clear the rightmost set bit**: `n = n & (n - 1)`
- **Is power of 2**: `n > 0 && (n & (n - 1)) == 0`
- **Extract lowest set bit**: `n & (-n)`
- **Swap two numbers without temp**:
  ```cpp
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  ```
