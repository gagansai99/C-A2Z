#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0, xor2 = 0;

        // XOR all numbers from 0 to n
        for (int i = 0; i <= nums.size(); i++) {
            xor1 ^= i;
        }

        // XOR all elements in nums
        for (int i = 0; i < nums.size(); i++) {
            xor2 ^= nums[i];
        }

        // The missing number will be the difference
        return xor1 ^ xor2;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {3, 0, 1}; 

    cout << "Missing number is: " << sol.missingNumber(nums) << endl;

    return 0;
}
