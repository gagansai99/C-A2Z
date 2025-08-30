#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> twoOddNum(vector<int>& arr) {
        map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        vector<int> v;
        for(auto it:m){
            if(it.second % 2 != 0){
                v.push_back(it.first);
            }
        }
        sort(v.begin(), v.end(), greater<int>());
        return v;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    Solution s;
    vector<int> ans = s.twoOddNum(arr);
    for(int x : ans) cout << x << " ";
    return 0;
}
