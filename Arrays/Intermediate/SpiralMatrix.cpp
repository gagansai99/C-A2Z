#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int top = 0, left = 0, right = matrix[0].size() - 1, bottom = matrix.size() - 1;

        while(left <= right && top <= bottom) {
            for(int i = left; i <= right; i++) {
                v.push_back(matrix[top][i]);
            }
            top++;

            for(int i = top; i <= bottom; i++) {
                v.push_back(matrix[i][right]);
            }
            right--;

            if(top <= bottom) {
                for(int i = right; i >= left; i--) {
                    v.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if(left <= right) {
                for(int i = bottom; i >= top; i--) {
                    v.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return v;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = sol.spiralOrder(matrix);

    cout << "Spiral order: ";
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
