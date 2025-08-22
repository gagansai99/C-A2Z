#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> v;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }

        for (auto i : m) {
            if (i.second > nums.size() / 3) {
                v.push_back(i.first);
            }
        }

        return v;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {3, 2, 3};
    vector<int> ans1 = sol.majorityElement(nums1);
    cout << "Majority Elements: ";
    for (int x : ans1) cout << x << " ";
    cout << endl;

    vector<int> nums2 = {1};
    vector<int> ans2 = sol.majorityElement(nums2);
    cout << "Majority Elements: ";
    for (int x : ans2) cout << x << " ";
    cout << endl;

    vector<int> nums3 = {1,2};
    vector<int> ans3 = sol.majorityElement(nums3);
    cout << "Majority Elements: ";
    for (int x : ans3) cout << x << " ";
    cout << endl; 

    return 0;
}
