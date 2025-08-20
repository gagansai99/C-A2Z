#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            maxi = max(maxi, sum);
            if (sum < 0) {
                sum = 0;
            }
        }
        return maxi;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Max Subarray Sum: " << sol.maxSubArray(nums1) << endl; // Expected: 6 (subarray [4,-1,2,1])

    vector<int> nums2 = {1};
    cout << "Max Subarray Sum: " << sol.maxSubArray(nums2) << endl; // Expected: 1

    vector<int> nums3 = {5, 4, -1, 7, 8};
    cout << "Max Subarray Sum: " << sol.maxSubArray(nums3) << endl; // Expected: 23

    return 0;
}
