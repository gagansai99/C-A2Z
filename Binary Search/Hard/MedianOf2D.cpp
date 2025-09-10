#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int matrixMedian(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        int low = INT_MAX, high = INT_MIN;
        for (int i = 0; i < r; i++) {
            low = min(low, matrix[i][0]);
            high = max(high, matrix[i][c - 1]);
        }

        int desired = (r * c + 1) / 2;

        while (low < high) {
            int mid = low + (high - low) / 2;
            int cnt = 0;

            for (int i = 0; i < r; i++) {
                cnt += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }

            if (cnt < desired)
                low = mid + 1;
            else
                high = mid;
        }

        return low;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> mat1 = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };

    cout << "Median of mat1: " << sol.matrixMedian(mat1) << endl;

    vector<vector<int>> mat2 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Median of mat2: " << sol.matrixMedian(mat2) << endl;

    return 0;
}
