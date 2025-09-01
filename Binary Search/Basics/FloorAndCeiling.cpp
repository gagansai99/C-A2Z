#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int floorVal = -1, ceilVal = -1;
        
        int lb = 0, ub = n - 1;
        while (lb <= ub) {
            int mid = (lb + ub) / 2;
            if (arr[mid] <= x) {
                floorVal = arr[mid];
                lb = mid + 1;
            } else {
                ub = mid - 1;
            }
        }
        
        lb = 0, ub = n - 1;
        while (lb <= ub) {
            int mid = (lb + ub) / 2;
            if (arr[mid] >= x) {
                ceilVal = arr[mid];
                ub = mid - 1;
            } else {
                lb = mid + 1;
            }
        }
        
        return {floorVal, ceilVal};
    }
};

int main() {
    Solution s;
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> ans = s.getFloorAndCeil(x, arr);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}
