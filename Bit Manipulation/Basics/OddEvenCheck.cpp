#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isEven(int n) {
        if (n & 1) {
            return false;
        }
        return true;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (sol.isEven(n)) {
        cout << n << " is Even" << endl;
    } else {
        cout << n << " is Odd" << endl;
    }

    return 0;
}
