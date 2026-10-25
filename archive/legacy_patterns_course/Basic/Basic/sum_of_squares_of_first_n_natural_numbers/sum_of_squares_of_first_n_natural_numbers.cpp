/*
 * ═══════════════════════════════════════════════════════════
 *  Problem : Sum of Squares of First N Natural Numbers
 *  Link    : https://www.geeksforgeeks.org/problems/sum-of-squares-of-first-n-natural-numbers/1
 *  Pattern : Logic Building
 *  Date    : 2026-07-25
 * ═══════════════════════════════════════════════════════════
 *
 *  💡 AHA! MOMENT:
 *  Finding mathematical formulas to replace iterative loops. Sum of squares is mathematically defined as [N * (N + 1) * (2N + 1)] / 6.
 *
 *  APPROACH:
 *  - Brute Force (Solution 1): Iterate from 1 to N using a loop, adding (i * i) to a sum variable. (Time taken: 0.02s, O(N)).
 *  - Optimal (Solution 2): Directly apply the formula (n * (n + 1) * (2n + 1)) / 6. (Time taken: 0.01s, O(1)).
 *
 *  ⏱️  Time  : O(1) [Optimal] | O(N) [Brute Force]
 *  💾  Space : O(1)
 * ═══════════════════════════════════════════════════════════
 */

#include <bits/stdc++.h>
using namespace std;

// Solution 1
class Solution {
	public:
	int sumOfSquares(int n) {
		// code here
		int sum = 0;
		
		if (n == 0) {
			return 0;
		}
		else {
			for (int i = 1; i <= n; i++)
				{
				sum = sum + (i *i);
			}
			return sum;
		}
	}
};

// Solution 2
class Solution {
	public:
	int sumOfSquares(int n) {
		// code here
		int sum = 0;
		
		if (n == 0) {
			return 0;
		}
		else {
			sum = (n * (n + 1) *(2*n + 1)) /6;
			
			return sum;
		}
	}
};


int main() {
    Solution sol;
    
    return 0;
}
