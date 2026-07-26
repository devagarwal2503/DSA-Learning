/*
 * ═══════════════════════════════════════════════════════════
 *  Problem : Overlapping Rectangles
 *  Link    : https://www.geeksforgeeks.org/problems/overlapping-rectangles1924/1
 *  Pattern : Logic Building
 *  Date    : 2026-07-25
 * ═══════════════════════════════════════════════════════════
 *
 *  💡 AHA! MOMENT:
 *  Don't over-engineer! Instead of complex intersection calculations or 2D grid mappings, it is much easier to define the boundary conditions under which the two rectangles do NOT overlap. They are separate if one is strictly to the left, right, above, or below the other.
 *
 *  APPROACH:
 *  1. Check if Rect 1 is to the left of Rect 2 (R1[0] < L2[0]).
 *  2. Check if Rect 1 is to the right of Rect 2 (L1[0] > R2[0]).
 *  3. Check if Rect 1 is above Rect 2 (R1[1] > L2[1]).
 *  4. Check if Rect 1 is below Rect 2 (L1[1] < R2[1]).
 *  5. If any of these separation conditions are met, they don't overlap (return false). Otherwise, they must overlap (return true).
 *
 *  ⏱️  Time  : O(1)
 *  💾  Space : O(1)
 * ═══════════════════════════════════════════════════════════
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int doOverlap(vector<int> L1, vector<int> R1, vector<int> L2, vector<int> R2) {
        // code here
        
        if(R1[0] < L2[0]) // Rect 1 Left Of Rect 2
            return false;
        if(L1[0] > R2[0]) // Rect 1 Right Of Rect 2
            return false;
        if(R1[1] > L2[1]) // Rect 1 Above Of Rect 2
            return false;
        if(L1[1] < R2[1]) // Rect 1 Below Of Rect 2
            return false;
        
        
        return true;
    }
};

int main() {
    Solution sol;
    
    return 0;
}
