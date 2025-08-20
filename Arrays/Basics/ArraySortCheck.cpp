#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> sorted(nums.begin(), nums.end());
        stable_sort(sorted.begin(), sorted.end());

        // Case 1: Already sorted
        if (nums == sorted) return true;

        // Try rotating and checking
        for (int i = 0; i < nums.size(); i++) {
            int temp = nums[0];
            for (int j = 0; j < nums.size() - 1; j++) {
                nums[j] = nums[j + 1];
            }
            nums[nums.size() - 1] = temp;

            if (nums == sorted) return true;
        }
        return false;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {3, 4, 5, 1, 2};
    vector<int> nums2 = {2, 1, 3, 4};
    vector<int> nums3 = {1, 2, 3};

    cout << boolalpha; // prints "true/false" instead of "1/0"
    cout << "Case 1: " << sol.check(nums1) << endl; // true
    cout << "Case 2: " << sol.check(nums2) << endl; // false
    cout << "Case 3: " << sol.check(nums3) << endl; // true

    return 0;
}
