/*
 * ═══════════════════════════════════════════════════════════
 *  Problem : Check If a Number is Power of Another Number
 *  Link    : https://www.geeksforgeeks.org/problems/check-if-a-number-is-power-of-another-number5442/1
 *  Pattern : Logic Building
 *  Date    : 2026-07-26
 * ═══════════════════════════════════════════════════════════
 *
 *  💡 AHA! MOMENT:
 *  Using logarithms to solve the exponential equation X^P = Y. By taking log on both sides: 
 *  P * log(X) = log(Y) => P = log(Y) / log(X). If P is an integer (within double precision tolerance), then Y is a power of X.
 *
 *  APPROACH:
 *  - Approach 1 (Brute Force For Loop): Start with X and multiply iteratively until we reach or exceed Y. (Time: O(Y), TLE).
 *  - Approach 2 (Brute Force While Loop): Maintain a power variable and multiply by X while less than Y. (Time: O(log_X(Y))).
 *  - Approach 3 (Optimal Math): Handle base case X = 1. Calculate P = log(Y) / log(X) and check if the fractional part is negligible (fabs(res - round(res)) < 1e-10). (Time: O(1)).
 *
 *  ⏱️  Time  : O(1) [Optimal] | O(log_X(Y)) [While Loop]
 *  💾  Space : O(1)
 * ═══════════════════════════════════════════════════════════
 */

#include <bits/stdc++.h>
using namespace std;

// ─── Brute Force (For Loop) ───────────────────────────────
/*
class SolutionFor {
public:
    bool isPower(int x, int y) {
        if (x <= 1) return false;
        if (y == 1) return true;
        
        int currentPower = x;
        for (int i = x; currentPower < y; i++) {
            currentPower = currentPower * x;
        }
        return currentPower == y;
    }
};
*/

// ─── Brute Force (While Loop) ─────────────────────────────
/*
class SolutionWhile {
public:
    bool isPower(int x, int y) {
        if (x == 1) return (y == 1);
        
        int pow = 1;
        while (pow < y) {
            pow = pow * x;
        }
        return (pow == y);
    }
};
*/

// ─── Optimal Solution (Logarithms) ────────────────────────
class Solution {
public:
    bool isPower(int x, int y) {
        if (x == 1) {
            return (y == 1);
        }
        
        // Compute logarithm P = log_x(y)
        double res = log(y) / log(x);
        
        // Compare with rounded value using a small double tolerance
        return fabs(res - round(res)) < 1e-10;
    }
};

int main() {
    Solution sol;
    // test cases here
    
    return 0;
}
