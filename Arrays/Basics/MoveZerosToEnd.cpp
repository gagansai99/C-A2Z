#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;
        while (j < nums.size()) {
            if (nums[j] == 0) {
                j++;
            } else {
                if (nums[i] == 0) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
                i++;
                j++;
            }
        }
    }
};

int main() {
    Solution sol;

    vector<int> nums = {0, 1, 0, 3, 12};
    sol.moveZeroes(nums);

    cout << "After moving zeroes: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
