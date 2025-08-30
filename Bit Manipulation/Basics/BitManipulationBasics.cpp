#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void bitManipulation(int num, int i) {
        int get;
        if ((num & (1 << (i - 1))) != 0) {
            get = 1;
        } else {
            get = 0;
        }

        int set = num | (1 << (i - 1));
        int clear = num & ~(1 << (i - 1));

        cout << get << " " << set << " " << clear;
    }
};

int main() {
    int num, i;
    cin >> num >> i;
    Solution s;
    s.bitManipulation(num, i);
    return 0;
}
