#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        int minStr = INT_MAX;
        for (int i = 0; i < strs.size(); i++) {
            minStr = min(minStr, (int)strs[i].size());
        }

        string s;
        int c = 0, flag = 0;
        for (int i = 0; i < minStr; i++) {
            char ch = strs[0][c];
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][c] != ch) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                s += ch;
            } else {
                break;
            }
            c++;
        }
        return s;
    }
};

int main() {
    Solution sol;

    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << "Common Prefix: " << sol.longestCommonPrefix(strs1) << endl;

    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "Common Prefix: " << sol.longestCommonPrefix(strs2) << endl;

    vector<string> strs3 = {"interview", "internet", "internal", "interval"};
    cout << "Common Prefix: " << sol.longestCommonPrefix(strs3) << endl;

    vector<string> strs4 = {};
    cout << "Common Prefix: " << sol.longestCommonPrefix(strs4) << endl;

    return 0;
}
