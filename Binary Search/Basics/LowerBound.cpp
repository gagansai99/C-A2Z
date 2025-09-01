#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int ans = -1;
        int lb = 0, ub = arr.size() - 1;
        while (lb <= ub) {
            int mid = (ub + lb) / 2;
            if (x >= arr[mid]) {
                ans = mid;
                lb = mid + 1;
            } else {
                ub = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << s.findFloor(arr, x) << endl;
    return 0;
}
