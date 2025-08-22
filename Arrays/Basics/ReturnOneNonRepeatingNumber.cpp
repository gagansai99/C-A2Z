#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        for (auto i : m) {
            if (i.second == 1) {
                return i.first;
            }
        }
        return 0; 
    }
};

int main() {
    Solution sol;

    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Single number: " << sol.singleNumber(nums) << endl;

    vector<int> nums2 = {2, 2, 3};
    cout << "Single number: " << sol.singleNumber(nums2) << endl;

    return 0;
}
