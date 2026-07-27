/*
 * ═══════════════════════════════════════════════════════════
 *  Problem : Lcm of Two Numbers
 *  Link    : https://www.geeksforgeeks.org/problems/lcm-of-two-numbers/1
 *  Pattern : Logic Building
 *  Date    : 2026-07-27
 * ═══════════════════════════════════════════════════════════
 *
 *  💡 AHA! MOMENT:
 *  Using the mathematical relationship LCM(a, b) * GCD(a, b) = a * b.
 *  To prevent integer overflow when calculating (a * b) / GCD(a, b), we perform division first: 
 *  LCM(a, b) = (a / GCD(a, b)) * b.
 *
 *  APPROACH:
 *  - Approach 1 (Iterative Multiple Search): Find min and max. Loop starting from max up to (a * b), incrementing by max. Return the first multiple that is divisible by min. (Time: O(min(a, b)), TLE for large inputs).
 *  - Approach 2 (GCD Math Relation & Overflow Prevention): Compute GCD using the optimal modulo Euclidean algorithm. Return (a / GCD(a, b)) * b. Dividing a by GCD first ensures the intermediate value stays small, preventing integer overflow. (Time: O(log(min(a, b)))).
 *
 *  ⏱️  Time  : O(log(min(a, b)))
 *  💾  Space : O(log(min(a, b))) [Call Stack]
 * ═══════════════════════════════════════════════════════════
 */

#include <bits/stdc++.h>
using namespace std;

// ─── Approach 1: Iterative Multiple Search ──────────────────
/*
class SolutionIterative {
  public:
    int lcm(int a, int b) {
        int max = a > b ? a : b;
        int min = a < b ? a : b;
        
        for (int i = max; i <= (a * b); i = i + max) {
            if (i % min == 0) {
                return i;
            }
        }
        return 0;
    }
};
*/

// ─── Approach 2: GCD Relation with Overflow Prevention ──────
class Solution {
  public:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
    
    int lcm(int a, int b) {
        // Divide first to prevent integer overflow
        return (a / gcd(a, b)) * b;
    }
};

int main() {
    Solution sol;
    // test cases here
    
    return 0;
}
