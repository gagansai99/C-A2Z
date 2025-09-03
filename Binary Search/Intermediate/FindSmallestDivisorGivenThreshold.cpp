#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool dividing(vector<int> &nums, int divisor, int threshold) {
        long long sum = 0;
        for (int num : nums) {
            // ceiling division without using floating point
            sum += (num + divisor - 1) / divisor;
            // sum+=ceil((double)num/divisor);
        }
        return sum <= threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int lb = 1;
        int ub = *max_element(nums.begin(), nums.end());
        int ans = ub;

        while (lb <= ub) {
            int mid = (lb + ub) / 2;
            if (dividing(nums, mid, threshold)) {
                ans = mid;
                ub = mid - 1; // try smaller divisor
            } else {
                lb = mid + 1; // need bigger divisor
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<int> nums1 = {1, 2, 5, 9};
    int threshold1 = 6;
    cout << "Smallest divisor: " << sol.smallestDivisor(nums1, threshold1) << endl;

    // Example 2
    vector<int> nums2 = {44, 22, 33, 11, 1};
    int threshold2 = 5;
    cout << "Smallest divisor: " << sol.smallestDivisor(nums2, threshold2) << endl;

    return 0;
}
