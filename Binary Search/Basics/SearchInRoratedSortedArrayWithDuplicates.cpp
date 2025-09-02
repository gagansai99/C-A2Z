#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int lb = 0, ub = nums.size() - 1;
        while (lb <= ub) {
            int mid = (ub + lb) / 2;
            if (nums[mid] == target) {
                return true;
            }
            if (nums[lb] == nums[mid] && nums[ub] == nums[mid]) {
                lb++;
                ub--;
                continue;
            }
            if (nums[mid] >= nums[lb]) { // left half is sorted
                if (target >= nums[lb] && target <= nums[mid]) {
                    ub = mid - 1;
                } else {
                    lb = mid + 1;
                }
            } else { // right half is sorted
                if (target >= nums[mid] && target <= nums[ub]) {
                    lb = mid + 1;
                } else {
                    ub = mid - 1;
                }
            }
        }
        return false;
    }
};

int main() {
    Solution s;

    // Example input
    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int target = 0;

    if (s.search(nums, target))
        cout << "Element " << target << " found!" << endl;
    else
        cout << "Element " << target << " not found!" << endl;

    return 0;
}
