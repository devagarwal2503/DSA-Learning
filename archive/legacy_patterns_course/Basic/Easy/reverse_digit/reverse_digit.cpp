/*
 * ═══════════════════════════════════════════════════════════
 *  Problem : Reverse Digit
 *  Link    : https://www.geeksforgeeks.org/problems/reverse-digit0316/1
 *  Pattern : Logic Building
 *  Date    : 2026-07-25
 * ═══════════════════════════════════════════════════════════
 *
 *  💡 AHA! MOMENT:
 *  Shifting the decimal place value of the reversed number left by multiplying it by 10 (reversedNum * 10) before adding the extracted digit.
 *
 *  APPROACH:
 *  1. Initialize reversedNum to 0.
 *  2. While n > 0, extract the last digit using (n % 10).
 *  3. Shift reversedNum left (multiply by 10) and add the extracted digit.
 *  4. Truncate n by dividing by 10.
 *
 *  ⏱️  Time  : O(log10(N))
 *  💾  Space : O(1)
 * ═══════════════════════════════════════════════════════════
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        
        int reversedNum = 0;
        
        while(n > 0){
            
            int tempNum = n % 10;
            reversedNum = reversedNum * 10;
            reversedNum = reversedNum + tempNum;
            n = n / 10;
        }
        
        return reversedNum;
    }
};

int main() {
    Solution sol;
    
    return 0;
}
