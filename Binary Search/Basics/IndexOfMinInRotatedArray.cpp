#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKRotation(vector<int> &arr) {
        int lb = 0, ub = arr.size() - 1, mini = INT_MAX, index = -1;
        while (lb <= ub) {
            int mid = (lb + ub) / 2;
            if (arr[mid] >= arr[lb]) { // left part sorted
                if (mini > arr[lb]) {
                    index = lb;
                    mini = arr[lb];
                }
                lb = mid + 1;
            } else { // right part sorted
                if (mini > arr[mid]) {
                    index = mid;
                    mini = arr[mid];
                }
                ub = mid - 1;
            }
        }
        return index;
    }
};

int main() {
    Solution s;

    // Example input
    vector<int> arr = {15, 18, 2, 3, 6, 12};

    int result = s.findKRotation(arr);

    cout << "The array is rotated " << result << " times." << endl;

    return 0;
}
