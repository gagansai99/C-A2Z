#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, lb = 0, ub = nums.size() - 1;
        while (lb <= ub) {
            int mid = (lb + ub) / 2;
            if (nums[mid] == target) {
                first = mid;
                ub = mid - 1;
            } else if (target > nums[mid]) {
                lb = mid + 1;
            } else {
                ub = mid - 1;
            }
        }
        if (first == -1) {
            return {-1, -1};
        }
        lb = 0;
        ub = nums.size() - 1;
        int second = -1;
        while (lb <= ub) {
            int mid = (lb + ub) / 2;
            if (nums[mid] == target) {
                second = mid;
                lb = mid + 1;
            } else if (target > nums[mid]) {
                lb = mid + 1;
            } else {
                ub = mid - 1;
            }
        }
        return {first, second};
    }
};

int main() {
    Solution s;
    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    vector<int> ans = s.searchRange(nums, target);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}
