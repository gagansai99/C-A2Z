#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int Xor = 0;
        for (int i = 0; i < nums.size(); i++) {
            Xor ^= nums[i];
        }
        return Xor;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "The single number is: " << sol.singleNumber(nums) << endl;
    return 0;
}
