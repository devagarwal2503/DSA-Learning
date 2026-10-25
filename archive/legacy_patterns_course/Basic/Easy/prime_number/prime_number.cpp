/*
 * ═══════════════════════════════════════════════════════════
 *  Problem : Prime Number
 *  Link    : https://www.geeksforgeeks.org/problems/prime-number2314/1
 *  Pattern : Logic Building
 *  Date    : 2026-07-25
 * ═══════════════════════════════════════════════════════════
 *
 *  💡 AHA! MOMENT:
 *  Divisors of any number N always come in pairs (a, b) such that a * b = N. If one divisor is <= sqrt(N), the other must be >= sqrt(N). Thus, we only need to search for divisors up to sqrt(N).
 *
 *  APPROACH:
 *  - Native Approach (Solution 2): Loop from 2 to N-1 and check divisibility. If divisible, it's not prime. (Time: O(N)).
 *  - Optimal Approach (Solution 1): Loop from 2 up to sqrt(N) (checked as i * i <= n). If no divisors exist in this range, the number is prime. (Time: O(sqrt(N))).
 *
 *  ⏱️  Time  : O(sqrt(N)) [Optimal] | O(N) [Native]
 *  💾  Space : O(1)
 * ═══════════════════════════════════════════════════════════
 */

#include <bits/stdc++.h>
using namespace std;

//Optimal Approach
class Solution {
  public:
    bool isPrime(int n) {
        // code here
        
        if(n <= 1) return false;
        
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0) return false;
        }
        
        return true;
    }
};


//Native Approach
class Solution {
  public:
    bool isPrime(int n) {
        // code here
        
        if(n <= 1) return false;
        
        for(int i = 2; i < n; i++){
            if(n % i == 0) return false;
        }
        
        return true;
    }
};

int main() {
    Solution sol;
    
    return 0;
}
