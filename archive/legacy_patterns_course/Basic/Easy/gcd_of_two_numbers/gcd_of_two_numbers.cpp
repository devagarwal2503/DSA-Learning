/*
 * ═══════════════════════════════════════════════════════════
 *  Problem : Gcd of Two Numbers
 *  Link    : https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1
 *  Pattern : Logic Building
 *  Date    : 2026-07-27
 * ═══════════════════════════════════════════════════════════
 *
 *  💡 AHA! MOMENT:
 *  Instead of linear searching or repeatedly subtracting numbers (which is slow and risk stack overflow for large inputs like 10^9),
 *  we apply the Euclidean modulo algorithm: GCD(a, b) = GCD(b, a % b). By taking the remainder instead of subtracting,
 *  we reduce the numbers logarithmically at each step.
 *
 *  APPROACH:
 *  - Approach 1 (Linear Search / Brute Force): Iterate down from min(a, b) to 1. The first number dividing both is the GCD. (Time: O(min(a, b)), TLE).
 *  - Approach 2 (Euclidean Subtraction - Recursion): Subtract the smaller number from the larger recursively. (Time: O(a + b), TLE/Stack Overflow for skewed inputs).
 *  - Approach 3 (Euclidean Subtraction with Divisibility checks): Check early modulo divisibility to short-circuit recursive subtractions. (Still TLEs for skewed inputs).
 *  - Approach 4 (Optimized Modulo Euclidean): Recursively evaluate GCD(b, a % b). When the base case b == 0 is reached, return a. (Time: O(log(min(a, b))), runs instantly).
 *
 *  ⏱️  Time  : O(log(min(a, b))) [Optimal]
 *  💾  Space : O(log(min(a, b))) [Call Stack]
 * ═══════════════════════════════════════════════════════════
 */

#include <bits/stdc++.h>
using namespace std;

// ─── Approach 1: Linear Loop (Brute Force) ──────────────────
/*
class SolutionBrute {
  public:
    int gcd(int a, int b) {
        int x = a < b ? a : b;
        while (x > 0) {
            if (a % x == 0 && b % x == 0) {
                break;
            }
            x--;
        }
        return x;
    }
};
*/

// ─── Approach 2: Basic Euclidean (Subtraction) ──────────────
/*
class SolutionEuclidSub {
  public:
    int gcd(int a, int b) {
        if (a == 0) return b;
        if (b == 0) return a;
        if (a == b) return a;
        if (a > b) return gcd(a - b, b);
        return gcd(a, b - a);
    }
};
*/

// ─── Approach 3: Subtraction with Modulo Divisibility ──────
/*
class SolutionEuclidDiv {
  public:
    int gcd(int a, int b) {
        if (a == 0) return b;
        if (b == 0) return a;
        if (a == b) return a;
        
        if (a > b) {
            if (a % b == 0) return b;
            return gcd(a - b, b);
        }
        if (b % a == 0) return a;
        return gcd(a, b - a);
    }
};
*/

// ─── Approach 4: Optimized Euclidean Modulo (Optimal) ──────
class Solution {
  public:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
};

int main() {
    Solution sol;
    // test cases here
    
    return 0;
}
