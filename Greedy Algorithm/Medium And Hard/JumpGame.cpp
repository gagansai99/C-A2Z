#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxInd = 0;
        if (nums.size() == 1) {
            return true;
        }
        for (int i = 0; i < nums.size(); i++) {
            maxInd = max(maxInd, i + nums[i]);
            if (maxInd == i && nums[i] == 0 && i != nums.size() - 1) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    Solution s;
    cout << (s.canJump(nums) ? "true" : "false");
    return 0;
}
