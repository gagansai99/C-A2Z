#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        int t = 0, c = 0;
        string s1;
        for (int i = 0; i < s.size(); i++) {
            if (t == 0 && s[i] == '(') {
                t = 1;
                continue;
            }
            if (t == 1 && c == 0 && s[i] == ')') {
                t = 0;
                continue;
            }
            if (s[i] == '(') {
                s1 += s[i];
                c++;
            } else {
                s1 += s[i];
                c--;
            }
        }
        return s1;
    }
};

int main() {
    Solution sol;

    string s1 = "(()())(())";
    cout << "Input: " << s1 << "\nOutput: " << sol.removeOuterParentheses(s1) << endl;

    string s2 = "(()())(())(()(()))";
    cout << "Input: " << s2 << "\nOutput: " << sol.removeOuterParentheses(s2) << endl;

    string s3 = "()()";
    cout << "Input: " << s3 << "\nOutput: " << sol.removeOuterParentheses(s3) << endl;

    return 0;
}
