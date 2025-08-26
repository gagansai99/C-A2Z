#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> v0;
        vector<int> v1;

        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                if(matrix[i][j] == 0){
                    v0.push_back(i);
                }
            }
        }

        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                if(matrix[i][j] == 0){
                    v1.push_back(j);
                }
            }
        }

        for(int i=0; i<matrix.size(); i++){
            auto it = find(v0.begin(), v0.end(), i);
            if(it != v0.end()){
                for(int j=0; j<matrix[i].size(); j++){
                    matrix[i][j] = 0;
                }
            }
        }

        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                auto it = find(v1.begin(), v1.end(), j);
                if(it != v1.end())
                    matrix[i][j] = 0;
            }
        }
    }
};

int main() {
    Solution sol;
    int n, m;

    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter matrix elements:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> matrix[i][j];
        }
    }

    sol.setZeroes(matrix);

    cout << "Matrix after setting zeroes:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
