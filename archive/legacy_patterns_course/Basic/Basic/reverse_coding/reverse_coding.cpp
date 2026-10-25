/*
 * ═══════════════════════════════════════════════════════════
 *  Problem : Reverse Coding
 *  Link    : https://www.geeksforgeeks.org/problems/reverse-coding2452/1
 *  Pattern : Logic Building
 *  Date    : 2026-07-25
 * ═══════════════════════════════════════════════════════════
 *
 *  💡 AHA! MOMENT:
 *  The sum of first N natural numbers is given by N * (N + 1) / 2. We must handle N = 0 explicitly to return 0.
 *
 *  APPROACH:
 *  1. Read the input integer N.
 *  2. Check if N is 0. If so, output 0.
 *  3. Otherwise, compute the sum of the first N natural numbers using the formula (N * (N + 1)) / 2 and print the result.
 *
 *  ⏱️  Time  : O(1)
 *  💾  Space : O(1)
 * ═══════════════════════════════════════════════════════════
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
};

int main() {
	int n;
	cin>> n;
	
	// code here
	
	if (n == 0)
		{
		cout << 0;
	} else {
		
		int sum = (n*(n + 1))/2;
		cout << sum;
	}
	return 0;
}

