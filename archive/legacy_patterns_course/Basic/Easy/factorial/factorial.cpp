/*
 * ═══════════════════════════════════════════════════════════
 *  Problem : Factorial
 *  Link    : https://www.geeksforgeeks.org/problems/factorial5739/1
 *  Pattern : Logic Building
 *  Date    : 2026-07-25
 * ═══════════════════════════════════════════════════════════
 *
 *  💡 AHA! MOMENT:
 *  Factorial is mathematically recursive: N! = N * (N - 1)!. Expressing this recursively simplifies code structure and size significantly compared to loop iterations.
 *
 *  APPROACH:
 *  - Iterative Approach (Solution 1): Initialize product to 1, loop from 1 to N, multiplying the product at each step. (Time: O(N), Space: O(1)).
 *  - Recursive Approach (Solution 2): Return 1 if N = 0 (base case). Otherwise, return N * factorial(N - 1) (recursive step). (Time: O(N), Space: O(N) call stack).
 *
 *  ⏱️  Time  : O(N)
 *  💾  Space : O(1) [Iterative] | O(N) [Recursive Stack]
 * ═══════════════════════════════════════════════════════════
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int factorial(int n) {
        // code here
        int fact = 1;
        
        for(int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        
        return fact;
    }
};

// With Recursion
class Solution {
	public:
	int factorial(int n) {
		// code here
		
		if (n == 0)
			return 1;
		
		return n * factorial(n - 1);
	}
};

int main() {
    Solution sol;
    
    return 0;
}
