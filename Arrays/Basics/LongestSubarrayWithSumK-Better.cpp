#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        map<long long,int> m;   
        long long Sum = 0;
        int maxi = 0;

        for(int i=0; i<arr.size(); i++) {
            Sum += arr[i];

            if(Sum == k) {
                maxi = max(maxi, i+1);
            }

            if(m.find(Sum - k) != m.end()) {
                maxi = max(maxi, i - m[Sum - k]);
            }

            if(m.find(Sum) == m.end()) {//This condition to includes 0's and -ves in subarray
                m[Sum] = i;
            }
        }
        return maxi;
    }
};

int main() {
    Solution sol;
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum k: ";
    cin >> k;

    int ans = sol.longestSubarray(arr, k);
    cout << "Length of longest subarray with sum " << k << " = " << ans << endl;

    return 0;
}
