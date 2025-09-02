#include <bits/stdc++.h>
using namespace std;

long long power(long long base, int exp, long long limit) {
    long long ans = 1;
    while (exp > 0) {
        ans *= base;
        if (ans > limit) return limit + 1; // early stop to avoid overflow
        exp--;
    }
    return ans;
}

class Solution {
public:
    int nthRoot(int n, int m) {
        int lb = 1, ub = m;
        while (lb <= ub) {
            int mid = (lb + ub) / 2;
            long long val = power(mid, n, m);

            if (val == m) {
                return mid;
            } else if (val < m) {
                lb = mid + 1;
            } else {
                ub = mid - 1;
            }
        }
        return -1; // no exact integer root
    }
};

int main() {
    Solution s;

    cout << s.nthRoot(3, 27) << endl; // 3
    cout << s.nthRoot(4, 69) << endl; // -1
    cout << s.nthRoot(2, 16) << endl; // 4

    return 0;
}
