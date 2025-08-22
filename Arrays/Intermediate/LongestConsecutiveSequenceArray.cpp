#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return 1;

        int maxi = 1, c = 1;
        sort(nums.begin(), nums.end()); 

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                continue;
            }
            if(nums[i] - nums[i-1] == 1) {
                c++;
            } else {
                c = 1;
            }
            maxi = max(maxi, c);
        }
        return maxi;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {100, 4, 200, 1, 3, 2};

    int result = sol.longestConsecutive(nums);

    cout << "Longest consecutive sequence length: " << result << endl;

    return 0;
}
