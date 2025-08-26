#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxSum(vector<int> &arr) {
        int n = arr.size();
        int ans = 0;
        for(int i=0; i<n-1; i++) {
            ans = max(ans, arr[i] + arr[i+1]);
        }
        return ans;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    Solution ob;
    cout << ob.maxSum(arr) << endl;
    return 0;
}
