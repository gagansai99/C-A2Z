#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        return pow(x, n);  // using built-in pow
    }
};

int main() {
    Solution sol;

    double x;
    int n;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;

    cout << "Result: " << sol.myPow(x, n) << endl;

    return 0;
}
