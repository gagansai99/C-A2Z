#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prodl = 1, prodr = 1;
        int i = 0, j = nums.size() - 1;
        int maxi = INT_MIN;

        while (i < nums.size() && j > -1) {
            prodl *= nums[i];
            prodr *= nums[j];
            maxi = max(maxi, max(prodl, prodr));

            if (prodl == 0) prodl = 1;
            if (prodr == 0) prodr = 1;

            i++;
            j--;
        }
        return maxi;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {2, 3, -2, 4};
    cout << "Max Product: " << sol.maxProduct(nums1) << endl; // Expected: 6

    vector<int> nums2 = {-2, 0, -1};
    cout << "Max Product: " << sol.maxProduct(nums2) << endl; // Expected: 0

    vector<int> nums3 = {-2, 3, -4};
    cout << "Max Product: " << sol.maxProduct(nums3) << endl; // Expected: 24

    return 0;
}
