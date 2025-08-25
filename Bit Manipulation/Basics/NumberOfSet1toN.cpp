#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSetBits(int n) {
        int i = 1, c = 0;
        while (i <= n) {
            int j = i;
            while (j > 0) {
                if (j & 1) {
                    c++;
                }
                j = j >> 1;
            }
            i++;
        }
        return c;   
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Total set bits from 1 to " << n << " = " 
         << sol.countSetBits(n) << endl;

    return 0;
}
