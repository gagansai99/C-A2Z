#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkKthBit(int n, int k) {
        if ((n >> k) & 1) {
            return true;
        }
        return false;
    }
};

int main() {
    Solution sol;
    int n, k;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the bit position to check: ";
    cin >> k;

    if (sol.checkKthBit(n, k)) {
        cout << "The " << k << "-th bit of " << n << " is SET (1)." << endl;
    } else {
        cout << "The " << k << "-th bit of " << n << " is NOT set (0)." << endl;
    }

    return 0;
}
