#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lb = 0, ub = nums.size() - 1;
        while (lb <= ub) {
            int mid = (ub + lb) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] >= nums[lb]) { // left half is sorted check
                if (target >= nums[lb] && target <= nums[mid]) {
                    ub = mid - 1;
                } else {
                    lb = mid + 1;
                }
            } else { // right half is sorted check
                if (target >= nums[mid] && target <= nums[ub]) {
                    lb = mid + 1;
                } else {
                    ub = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main() {
    Solution s;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int result = s.search(nums, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
