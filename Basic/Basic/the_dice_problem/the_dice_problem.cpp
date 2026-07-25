/*
 * ═══════════════════════════════════════════════════════════
 *  Problem : The Dice Problem
 *  Link    : https://www.geeksforgeeks.org/problems/the-dice-problem2316/1
 *  Pattern : Logic Building
 *  Date    : 2026-07-25
 * ═══════════════════════════════════════════════════════════
 *
 *  💡 AHA! MOMENT:
 *  Observing the geometric constant of a standard 6-sided dice—the numbers on any two opposite faces always sum up to exactly 7.
 *
 *  APPROACH:
 *  - Approach 1 (Array Mapping): Store opposite faces in a reverse array [6, 5, 4, 3, 2, 1] and return array[n - 1].
 *  - Approach 2 (Math Constant): Since opposite faces sum to 7, return (7 - n) directly.
 *
 *  ⏱️  Time  : O(1)
 *  💾  Space : O(1)
 * ═══════════════════════════════════════════════════════════
 */

#include <bits/stdc++.h>
using namespace std;


// My approach
class Solution {
  public:
    int oppositeFaceOfDice(int n) {
        // code here
        int array[6] = {6,5,4,3,2,1};
        
        return array[n-1];
    }
};

// My second approach Because I observed sum of both sides is 7
class Solution {
  public:
    int oppositeFaceOfDice(int n) {
        // code here
        // int array[6] = {6,5,4,3,2,1};
        
        return 7 - n;
    }
};

int main() {
    Solution sol;
    
    return 0;
}
