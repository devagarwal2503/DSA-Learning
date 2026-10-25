/*
 * ═══════════════════════════════════════════════════════════
 *  Problem : Sum of Digits
 *  Link    : https://www.geeksforgeeks.org/problems/sum-of-digits1742/1
 *  Pattern : Logic Building
 *  Date    : 2026-07-25
 * ═══════════════════════════════════════════════════════════
 *
 *  💡 AHA! MOMENT:
 *  Extracting digits from right to left using arithmetic modulo (%) and division (/) operations base 10 in a loop.
 *
 *  APPROACH:
 *  1. Initialize sum to 0.
 *  2. In a loop while n > 0, extract the last digit using (n % 10) and add it to sum.
 *  3. Truncate the last digit of n using integer division (n / 10).
 *
 *  ⏱️  Time  : O(log10(N))
 *  💾  Space : O(1)
 * ═══════════════════════════════════════════════════════════
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	int sumOfDigits(int n) {
		// code here
		int sum = 0;
		
		while (n > 0) {
			int tempNum = n % 10;
			sum = sum + tempNum;
			n = n / 10;
		}
		
		return sum;
	}
};

int main() {
    Solution sol;
    
    return 0;
}
