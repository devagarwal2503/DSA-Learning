/*
 * ═══════════════════════════════════════════════════════════
 *  Problem : Pair Cube Count
 *  Link    : https://www.geeksforgeeks.org/problems/pair-cube-count4132/1
 *  Pattern : Logic Building
 *  Date    : 2026-07-25
 * ═══════════════════════════════════════════════════════════
 *
 *  💡 AHA! MOMENT:
 *  Rearranging the equation a^3 + b^3 = N into b^3 = N - a^3. Since a >= 1, the maximum value of a is bounded by the cube root of N (a <= cbrt(N)). This allows us to search only up to cbrt(N) and check if the remainder (N - a^3) is a perfect cube.
 *
 *  APPROACH:
 *  - Brute Force Approach (Solution 1): Run nested loops for i and j from 1 to N, checking if i^3 + j^3 = N. (Time: O(N^2), TLE).
 *  - Optimal Approach (Solution 2): Iterate i from 1 to cbrt(N). Compute the remainder diff = N - i^3. Find the integer cube root of diff, and verify if cbrtDiff^3 = diff. If it matches, increment count. (Time: O(cbrt(N))).
 *
 *  ⏱️  Time  : O(cbrt(N))
 *  💾  Space : O(1)
 * ═══════════════════════════════════════════════════════════
 */

#include <bits/stdc++.h>
using namespace std;


// Initial Solution - Works but too slow.
class Solution {
  public:
    int pairCubeCount(int n) {
        // code here
        
        int count = 0;
        
        for(int i =1; i <= n; i++)
        {
            for(int j = 0; j <= n; j++)
            {
                int num = (i * i * i) + (j * j * j);
                if(num == n)
                {
                    count++;
                }
            }
        }
        
        return count;
    }
};

//Optimal Solution
class Solution {
  public:
    int pairCubeCount(int n) {
        // code here
        
        int count = 0;
        
        for(int i = 1; i <= cbrt(n); i++)
        {
            int cb = i * i * i;
            
            
            int diff = n - cb;
            
            
            int cbrtDiff = cbrt(diff);
            
            if((cbrtDiff * cbrtDiff * cbrtDiff) == diff)
            {
                count++;
            }
        }
        
        return count;
    }
};

int main() {
    Solution sol;
    
    return 0;
}
