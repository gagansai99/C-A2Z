#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = nums.size();
        int lb = 0, ub = nums.size() - 1;
        while (lb <= ub) {
            int mid = (lb + ub) / 2;
            if (nums[mid] >= target) {
                ans = mid;
                ub = mid - 1;
            } else {
                lb = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 3, 5, 6};
    int target;
    cin >> target;
    cout << s.searchInsert(nums, target) << endl;
    return 0;
}
