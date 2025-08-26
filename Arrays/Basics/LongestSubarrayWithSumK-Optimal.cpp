#include <bits/stdc++.h>
using namespace std;
//For positives inly
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int i = 0, j = 0, maxi = 0;
        long long sum = 0;
        int n = arr.size();

        while(j < n) {
            sum += arr[j];

            while(i <= j && sum > k) {  
                sum -= arr[i];
                i++;
            }

            if(sum == k) {
                maxi = max(maxi, j - i + 1);
            }

            j++;
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
