#include <bits/stdc++.h>
using namespace std;

bool isFeasible(vector<int> &v, int mid, int k) {
    int painter = 1, sum = 0;
    for (int i = 0; i < v.size(); i++) {
        if (sum + v[i] > mid) {
            painter++;
            sum = v[i];
        } else {
            sum += v[i];
        }
    }
    return painter <= k;
}

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int lb = INT_MIN, ub = 0;
        for (int i = 0; i < nums.size(); i++) {
            lb = max(lb, nums[i]);
            ub += nums[i];
        }
        int ans = 0;
        while (lb <= ub) {
            int mid = (ub + lb) / 2;
            if (isFeasible(nums, mid, k)) {
                ans = mid;
                ub = mid - 1;
            } else {
                lb = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter k (number of partitions): ";
    cin >> k;

    Solution obj;
    int result = obj.splitArray(nums, k);
    cout << "Minimum largest sum = " << result << endl;

    return 0;
}
