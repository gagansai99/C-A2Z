#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> v;

        // Merge the two sorted arrays
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] > nums2[j]) {
                v.push_back(nums2[j]);
                j++;
            } else {
                v.push_back(nums1[i]);
                i++;
            }
        }

        while (i < nums1.size()) {
            v.push_back(nums1[i]);
            i++;
        }

        while (j < nums2.size()) {
            v.push_back(nums2[j]);
            j++;
        }

        int mid = (0 + v.size() - 1) / 2;
        if (v.size() % 2 == 0) {
            return ((double)(v[mid] + v[mid + 1])) / 2;
        } else {
            return (double)(v[mid]);
        }
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    double median = sol.findMedianSortedArrays(nums1, nums2);
    cout << "Median is: " << median << endl;

    // Another test
    vector<int> nums3 = {1, 2};
    vector<int> nums4 = {3, 4};

    cout << "Median is: " << sol.findMedianSortedArrays(nums3, nums4) << endl;

    return 0;
}
