#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0;

        while (i < n) {
            if ((i % 2 == 0 && nums[i] > 0) || (i % 2 != 0 && nums[i] < 0)) {
                i++;
            } 
            else {
                j = max(j, i + 1); 
                while (j < n) {
                    if ((i % 2 == 0 && nums[j] > 0) || (i % 2 != 0 && nums[j] < 0)) {
                        swap(nums[i], nums[j]);
                        break;
                    }
                    j++;
                }
                i++;
            }
        }
        return nums;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {28,-41,22,-8,-37,46,35,-9,18,-6,19,-26,-37,-10,-9,15,14,31};

    vector<int> result = sol.rearrangeArray(nums);

    cout << "Output: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    cout << "Expected: [28,-41,22,-8,46,-37,35,-9,18,-6,19,-26,15,-37,14,-10,31,-9]" << endl;

    return 0;
}
