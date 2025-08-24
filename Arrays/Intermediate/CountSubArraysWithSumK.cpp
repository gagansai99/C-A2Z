#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0, c = 0;
        unordered_map<int,int> m;
        m[0] = 1; 
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(m.find(sum - k) != m.end()) {
                c += m[sum - k];
            }
            m[sum]++;
        }
        return c;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {1, 2, 3};  
    int k = 3;

    int result = sol.subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << " = " << result << endl;

    return 0;
}
