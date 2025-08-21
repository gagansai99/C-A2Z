#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        stable_sort(intervals.begin(), intervals.end());
        vector<vector<int>> v;
        v.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= v[v.size() - 1][1]) {
                v[v.size() - 1][1] = max(intervals[i][1], v[v.size() - 1][1]);
            } else {
                v.push_back(intervals[i]);
            }
        }
        return v;
    }
};

int main() {
    Solution sol;

    vector<vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};
    
    vector<vector<int>> result = sol.merge(intervals);

    cout << "Merged intervals: \n";
    for (auto& interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}
