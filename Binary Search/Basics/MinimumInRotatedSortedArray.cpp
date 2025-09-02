#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int lb = 0, ub = nums.size() - 1, mini = INT_MAX;
        while (lb <= ub) {
            int mid = (lb + ub) / 2;
            if (nums[mid] >= nums[lb]) { // left part sorted
                mini = min(mini, nums[lb]);
                lb = mid + 1;
            } else { // right part sorted
                mini = min(mini, nums[mid]);
                ub = mid - 1;
            }
        }
        return mini;
    }
};

int main() {
    Solution s;

    // Example input
    vector<int> nums = {3, 4, 5, 1, 2};

    int result = s.findMin(nums);

    cout << "The minimum element in the rotated sorted array is: " << result << endl;

    return 0;
}
