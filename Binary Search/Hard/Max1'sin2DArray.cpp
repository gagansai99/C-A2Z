#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int rowIndex = -1, maxi = 0;
        for(int i = 0; i < arr.size(); i++) {
            int lb = 0, ub = arr[i].size() - 1;
            while(lb <= ub) {
                int mid = (lb + ub) / 2;
                if(arr[i][mid] == 1) ub = mid - 1;
                else lb = mid + 1;
            }
            int countOnes = arr[i].size() - lb;
            if(countOnes > maxi) {
                maxi = countOnes;
                rowIndex = i;
            }
        }
        return rowIndex;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> arr = {
        {0,0,0,1},
        {0,1,1,1},
        {0,0,1,1}
    };
    cout << "Row with max 1s: " << sol.rowWithMax1s(arr) << endl;
    return 0;
}
