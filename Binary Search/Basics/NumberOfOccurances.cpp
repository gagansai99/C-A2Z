#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int first = -1, lb = 0, ub = arr.size() - 1;
        while (lb <= ub) {
            int mid = (lb + ub) / 2;
            if (arr[mid] == target) {
                first = mid;
                ub = mid - 1;
            } else if (target > arr[mid]) {
                lb = mid + 1;
            } else {
                ub = mid - 1;
            }
        }
        
        if (first == -1) return 0;

        lb = 0;
        ub = arr.size() - 1;
        int second = -1;
        while (lb <= ub) {
            int mid = (lb + ub) / 2;
            if (arr[mid] == target) {
                second = mid;
                lb = mid + 1;
            } else if (target > arr[mid]) {
                lb = mid + 1;
            } else {
                ub = mid - 1;
            }
        }
        return second - first + 1;
    }
};

int main() {
    Solution s;
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << s.countFreq(arr, target) << endl;
    return 0;
}
