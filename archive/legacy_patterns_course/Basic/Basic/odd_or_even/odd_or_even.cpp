/*
 * ═══════════════════════════════════════════════════════════
 *  Problem : Odd or Even
 *  Link    : https://www.geeksforgeeks.org/problems/odd-or-even3618/1
 *  Pattern : Logic Building
 *  Date    : 2026-07-25
 * ═══════════════════════════════════════════════════════════
 *
 *  💡 AHA! MOMENT:
 *  Any integer divisible by 2 with a remainder of 0 is even.
 *
 *  APPROACH:
 *  1. Apply the modulo operator (n % 2) to check divisibility.
 *  2. If the remainder is 0, return true; else return false.
 *
 *  ⏱️  Time  : O(1)
 *  💾  Space : O(1)
 * ═══════════════════════════════════════════════════════════
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isEven(int n) {
        // code here
        if (n % 2 == 0) {
            return true;
        }
        return false;
    }
};

int main() {
    Solution sol;
    // test cases here
    
    return 0;
}
