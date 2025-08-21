#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Fixed: pass vector by reference
    void reverse(vector<int>& arr, int ind, int n) {
        while (ind <= n) {
            swap(arr[ind], arr[n]);
            ind++;
            n--;
        }
    }

    void nextPermutation(vector<int>& nums) {
        int ind = -1;

        // Step 1: find the first index 'ind' from the right such that nums[ind] < nums[ind+1]
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }

        // Step 2: if no such index found -> reverse the entire array
        if (ind == -1) {
            reverse(nums, 0, nums.size() - 1);
        } 
        else {
            // Step 3: find element just larger than nums[ind] (from the right)
            for (int i = nums.size() - 1; i > ind; i--) {
                if (nums[i] > nums[ind]) {
                    swap(nums[i], nums[ind]);
                    break;
                }
            }
            // Step 4: reverse the suffix
            reverse(nums, ind + 1, nums.size() - 1);
        }
    }
};

// ---------- Driver Code ----------
int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3};
    cout << "Input: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    sol.nextPermutation(nums);

    cout << "Next Permutation: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
