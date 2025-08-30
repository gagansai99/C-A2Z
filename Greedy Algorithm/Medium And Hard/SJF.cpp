// User function Template for C++

//Back-end complete function Template for C++

class Solution {
  public:
    long long solve(vector<int>& bt) {
        // code here
        sort(bt.begin(),bt.end());
        int sum=0;
        vector<int> v;
        for(int i=1;i<bt.size();i++){
            sum+=bt[i-1];
            v.push_back(sum);
        }
        sum=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
        return sum/bt.size();
    }
};

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> bt(n);
    for(int i=0;i<n;i++) cin >> bt[i];
    Solution s;
    cout << s.solve(bt);
    return 0;
}
