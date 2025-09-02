#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        stable_sort(intervals.begin(), intervals.end());
        vector<vector<int>> v;
        v.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++) {
            if (v.back()[1] >= intervals[i][0]) {
                v.back()[1] = max(intervals[i][1], v.back()[1]);
            } else {
                v.push_back(intervals[i]);
            }
        }
        return v;
    }
};

int main() {
    Solution s;

    vector<vector<int>> intervals = {{1, 3}, {6, 9}};
    vector<int> newInterval = {2, 5};

    vector<vector<int>> result = s.insert(intervals, newInterval);

    cout << "Merged Intervals: ";
    for (auto &interval : result) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}
