#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int floorSqrt(int n) {
        int lb = 1, ub = n, ans = 0;
        while (lb <= ub) {
            int mid = (lb + ub) / 2;

            if ((1LL * mid * mid) <= n) { // use 1LL to prevent overflow
                ans = mid;
                lb = mid + 1;
            } else {
                ub = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;

    int n = 28; // example input
    cout << "Floor square root of " << n << " is: " << s.floorSqrt(n) << endl;

    return 0;
}
