#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lb = 0, ub = nums.size() - 1;
        while (lb <= ub) {
            int mid = lb + (ub - lb) / 2; // safer to avoid overflow
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                ub = mid - 1;
            } else {
                lb = mid + 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;

    int result = sol.search(nums, target);
    cout << "Index of " << target << ": " << result << endl;

    target = 2;
    result = sol.search(nums, target);
    cout << "Index of " << target << ": " << result << endl;

    return 0;
}
