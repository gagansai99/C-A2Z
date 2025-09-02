#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int XOR = 0;
        for (int i = 0; i < nums.size(); i++) {
            XOR ^= nums[i];
        }
        return XOR;
    }
};

int main() {
    Solution s;

    // Example input
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};

    int result = s.singleNonDuplicate(nums);

    cout << "The single non-duplicate element is: " << result << endl;

    return 0;
}
