#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
            if (m[nums[i]] > nums.size() / 2) {
                return nums[i];
            }
        }
        return 0; // problem guarantees a majority element exists, so this won't happen
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {3, 2, 3};
    cout << "Majority Element: " << sol.majorityElement(nums1) << endl; // Expected: 3

    vector<int> nums2 = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element: " << sol.majorityElement(nums2) << endl; // Expected: 2

    return 0;
}
