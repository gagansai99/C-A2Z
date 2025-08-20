#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;  

        k = k % n;  // handle k > n

        vector<int> v;
        v.reserve(n); // reserve space for efficiency

        // Step 1: take last k elements
        for (int i = n - k; i < n; i++) {
            v.push_back(nums[i]);
        }
        // Step 2: take first n-k elements
        for (int i = 0; i < n - k; i++) {
            v.push_back(nums[i]);
        }

        nums = v; // copy back
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    
    sol.rotate(nums, k);

    cout << "Rotated array: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
