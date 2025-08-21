#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n == 0) return;  // if nums2 empty, nothing to do
        if (m == 0) {        // if nums1 has no valid elements
            for (int i = 0; i < n; i++) nums1[i] = nums2[i];
            return;
        }

        int i = 0, j = 0;
        while (j < nums2.size() && i < nums1.size()) {
            if (nums2[j] > nums1[i]) {
                if (nums1[i] == 0 && i >= m) {   // place nums2 elements into extra zeros of nums1
                    swap(nums2[j], nums1[i]);
                    j++;
                }
                i++;
            }
            else { // nums2[j] <= nums1[i]
                swap(nums2[j], nums1[i]);
                stable_sort(nums2.begin(), nums2.end()); // keep nums2 sorted
                i++;
            }
        }

        // finally sort nums1
        stable_sort(nums1.begin(), nums1.end());
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;

    sol.merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int x : nums1) cout << x << " ";
    cout << endl;

    return 0;
}
