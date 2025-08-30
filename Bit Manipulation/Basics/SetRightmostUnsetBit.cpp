#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findPrimeFactors(int n) {
        vector<int> factors;
        while (n % 2 == 0) {
            factors.push_back(2);
            n /= 2;
        }
        for (int i = 3; i * i <= n; i += 2) {
            while (n % i == 0) {
                factors.push_back(i);
                n /= i;
            }
        }
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
