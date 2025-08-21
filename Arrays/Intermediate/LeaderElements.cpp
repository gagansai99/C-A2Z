#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> v;
        int n = arr.size();
        v.push_back(arr[n-1]);  // last element is always a leader
        
        for (int i = n-2; i >= 0; i--) {
            if (arr[i] >= v.back()) {
                v.push_back(arr[i]);
            }
        }
        
        reverse(v.begin(), v.end());  // restore left-to-right order
        return v;
    }
};

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    Solution sol;
    vector<int> ans = sol.leaders(arr);

    cout << "Leaders: ";
    for (int x : ans) cout << x << " ";
    cout << endl;
}
