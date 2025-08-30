#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution {
  public:
    void sieve() {}

    vector<int> findPrimeFactors(int n) {

        // Write your code here
        vector<int> factors;

        // Divide by 2 until odd
        while (n % 2 == 0) {
            factors.push_back(2);
            n /= 2;
        }

        // Check odd factors
        for (int i = 3; i * i <= n; i += 2) {
            while (n % i == 0) {
                factors.push_back(i);
                n /= i;
            }
        }

        // If n is still > 2, then it's a prime factor
        if (n > 2) {
            factors.push_back(n);
        }

        return factors;
        
    }
};

int main() {
    int n;
    cin >> n;
    Solution s;
    vector<int> ans = s.findPrimeFactors(n);
    for (int x : ans) cout << x << " ";
    return 0;
}
