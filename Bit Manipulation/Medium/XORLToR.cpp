
#include <bits/stdc++.h>
using namespace std;
// User function Template for C++

class Solution {
  public:
    int xorUpto(int n) {
        if (n % 4 == 0) return n;
        if (n % 4 == 1) return 1;
        if (n % 4 == 2) return n + 1;
        return 0;
    }

    int findXOR(int l, int r) {
        return xorUpto(r) ^ xorUpto(l - 1);
    }
};

int main() {
    int l, r;
    cin >> l >> r;
    Solution s;
    cout << s.findXOR(l, r);
    return 0;
}
