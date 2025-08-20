#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0, m = 0, r = nums.size() - 1;

        while (m <= r) {
            if (nums[m] == 0) {
                swap(nums[l], nums[m]);
                l++;
                m++;
            }
            else if (nums[m] == 1) {
                m++;
            }
            else { // nums[m] == 2
                swap(nums[m], nums[r]);
                r--;
            }
        }
    }
};

int main() {
    Solution sol;

    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sol.sortColors(nums);

    cout << "Sorted Colors: ";
    for (int x : nums) cout << x << " ";
    cout << endl; // Expected: 0 0 1 1 2 2

    vector<int> nums2 = {2, 0, 1};
    sol.sortColors(nums2);

    cout << "Sorted Colors: ";
    for (int x : nums2) cout << x << " ";
    cout << endl; // Expected: 0 1 2

    return 0;
}
