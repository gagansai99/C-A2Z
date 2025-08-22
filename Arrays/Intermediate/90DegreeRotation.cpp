#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Transpose the matrix
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                if(j > i){
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }

        // Reverse each row
        for(int i = 0; i < matrix.size(); i++){
            int lb = 0, ub = matrix[i].size() - 1;
            while(lb <= ub){
                swap(matrix[i][ub], matrix[i][lb]);
                ub--;
                lb++;
            }
        }
    }
};

int main() {
    int n;
    cout << "Enter matrix size (n x n): ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    Solution sol;
    sol.rotate(matrix);

    cout << "Rotated matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
