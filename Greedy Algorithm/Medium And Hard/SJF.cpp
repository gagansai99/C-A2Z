// User function Template for C++

//Back-end complete function Template for C++

class Solution {
  public:
    long long solve(vector<int>& bt) {
        sort(bt.begin(), bt.end());
        long long sum = 0, prefix = 0;
        for (int i = 1; i < bt.size(); i++) {
            prefix += bt[i - 1];
            sum += prefix;
        }
        return sum / bt.size();
    }
};

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> bt(n);
    for (int i = 0; i < n; i++) cin >> bt[i];
    Solution s;
    cout << s.solve(bt);
    return 0;
}
