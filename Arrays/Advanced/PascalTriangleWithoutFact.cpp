#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v1;
        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1); 
            for (int j = 1; j < i; j++) {
                row[j] = v1[i - 1][j - 1] + v1[i - 1][j];
            }
            v1.push_back(row);
        }
        return v1;
    }
};

int main() {
    Solution sol;
    int numRows = 30; 
    vector<vector<int>> res = sol.generate(numRows);

    cout << "Pascal's Triangle:" << endl;
    for (auto &row : res) {
        for (int x : row) cout << x << " ";
        cout << endl;
    }
}
