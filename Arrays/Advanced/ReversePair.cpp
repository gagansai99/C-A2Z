#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mergeAndCount(vector<int>& nums, int left, int mid, int right) {
        int count = 0;
        int j = mid + 1;

        // Count reverse pairs
        for (int i = left; i <= mid; i++) {
            while (j <= right && (long long)nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }

        // Create two subarrays
        int n1 = mid - left + 1;
        int n2 = right - mid;
        vector<int> L(n1), R(n2);

        for (int i = 0; i < n1; i++) L[i] = nums[left + i];
        for (int j = 0; j < n2; j++) R[j] = nums[mid + 1 + j];

        // Merge two sorted arrays L[] and R[] into nums[]
        int i = 0, k = left;
        j = 0;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) nums[k++] = L[i++];
            else nums[k++] = R[j++];
        }
        while (i < n1) nums[k++] = L[i++];
        while (j < n2) nums[k++] = R[j++];

        return count;
    }

    int mergeSort(vector<int>& nums, int left, int right) {
        if (left >= right) return 0;
        int mid = (left + right) / 2;
        int count = mergeSort(nums, left, mid);
        count += mergeSort(nums, mid + 1, right);
        count += mergeAndCount(nums, left, mid, right);
        return count;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};

int main() {
    vector<int> nums = {2, 4, 3, 5, 1};
    Solution sol;
    cout << "Reverse Pairs: " << sol.reversePairs(nums) << endl;
    return 0;
}
