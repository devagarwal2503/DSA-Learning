/*
 * ═══════════════════════════════════════════════════════════
 *  Problem : Closest Number
 *  Link    : https://www.geeksforgeeks.org/problems/closest-number5728/1
 *  Pattern : Logic Building
 *  Date    : 2026-07-25
 * ═══════════════════════════════════════════════════════════
 *
 *  💡 AHA! MOMENT:
 *  Using mathematical quotient division and rounding logic instead of simulation. Direct mathematical formulas are much more powerful for handling negative values and larger search bounds.
 *
 *  APPROACH:
 *  - Self Attempt (Simulation): Iterated in a small fixed search range [n-5, n+5] using mod checks. Failed for values of m > 5 and edge cases.
 *  - Worked Solution (Math Formula): 
 *    1. Find basic quotient: q = n / m.
 *    2. Find closest multiples on both sides: num1 = m * q and num2 = m * (q + 1) or m * (q - 1) depending on sign (n * m > 0).
 *    3. Compare absolute distances abs(n - num1) and abs(n - num2) and return the closer multiple.
 *
 *  ⏱️  Time  : O(1)
 *  💾  Space : O(1)
 * ═══════════════════════════════════════════════════════════
 */

#include <bits/stdc++.h>
using namespace std;


// Solution that worked.
class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        int q = n / m;
        
        int num1 = m * q;
        
        int num2 = (n * m) > 0 ? m * (q + 1) : m * (q - 1);
        
        if(abs(n-num1) < abs(n-num2)){
            return num1;
        }
        return num2;
    }
};


// Solution I tried by my self. I solved basic input but failed for maximum test cases.
class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        int LB,UB = 0;
        
        for(int i = n; i > (n - 6); i--)
        {
            if(i % m == 0)
            {
                LB = i;
                break;
            }
        }
        
        for(int i = n; i < (n +6); i++)
        {
            if(i % m == 0)
            {
                UB = i;
                break;
            }
        }
        
        int final = LB < UB ? LB : UB;
        
        return final;
    }
};

int main() {
    Solution sol;
    
    return 0;
}
