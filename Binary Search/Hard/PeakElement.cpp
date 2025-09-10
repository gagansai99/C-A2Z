#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int l = 0, r = cols - 1;

        while (l <= r) {
            int midCol = (l + r) / 2;

            // Find row with max element in midCol
            int maxRow = 0;
            for (int i = 0; i < rows; i++) {
                if (mat[i][midCol] > mat[maxRow][midCol]) {
                    maxRow = i;
                }
            }

            int left = (midCol - 1 >= 0) ? mat[maxRow][midCol - 1] : -1;
            int right = (midCol + 1 < cols) ? mat[maxRow][midCol + 1] : -1;

            if (mat[maxRow][midCol] >= left && mat[maxRow][midCol] >= right) {
                return {maxRow, midCol}; // Found peak
            }
            else if (left > mat[maxRow][midCol]) {
                r = midCol - 1; // search left half
            }
            else {
                l = midCol + 1; // search right half
            }
        }
        return {-1, -1}; 
    }
};

int main() {
    Solution sol;

    vector<vector<int>> mat1 = {
        {1, 4, 3},
        {6, 7, 8},
        {5, 2, 9}
    };

    vector<int> peak1 = sol.findPeakGrid(mat1);
    cout << "Peak in mat1: (" << peak1[0] << ", " << peak1[1] 
         << ") = " << mat1[peak1[0]][peak1[1]] << endl;

    vector<vector<int>> mat2 = {
        {10, 8, 10, 10},
        {14, 13, 12, 11},
        {15, 9, 11, 21},
        {16, 17, 19, 20}
    };

    vector<int> peak2 = sol.findPeakGrid(mat2);
    cout << "Peak in mat2: (" << peak2[0] << ", " << peak2[1] 
         << ") = " << mat2[peak2[0]][peak2[1]] << endl;

    return 0;
}
