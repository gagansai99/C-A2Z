#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (m.find(complement) != m.end() && m[complement] != i) {
                return {i, m[complement]};
            }
        }

        return {}; 
    }
};

int main() {
    Solution sol;

    vector<int> nums = {3, 2, 4};
    int target = 6;

    vector<int> ans = sol.twoSum(nums, target);

    cout << "Indices: ";
    for (int idx : ans) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
