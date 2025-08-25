#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int c = 0;
        while (n > 0) {
            if (n & 1) {
                c++;
            }
            n >>= 1;
        }
        if (c == 1) {
            return true;
        }
        return false;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (sol.isPowerOfTwo(n)) {
        cout << n << " is a power of 2" << endl;
    } else {
        cout << n << " is NOT a power of 2" << endl;
    }

    return 0;
}
