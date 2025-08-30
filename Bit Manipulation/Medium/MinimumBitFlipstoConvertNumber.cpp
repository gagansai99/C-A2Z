#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int final = start ^ goal, c = 0;
        while (final > 0) {
            if ((final & 1) == 1) {
                c++;
            }
            final = final >> 1;
        }
        return c;
    }
};

int main() {
    int start, goal;
    cin >> start >> goal;
    Solution s;
    cout << s.minBitFlips(start, goal);
    return 0;
}
