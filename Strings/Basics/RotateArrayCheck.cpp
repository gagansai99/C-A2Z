#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            char temp=s[0];
            for(int j=1;j<s.size();j++){
                s[j-1]=s[j];
            }
            s[s.size()-1]=temp;
            if(s==goal){
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;

    vector<pair<string, string>> testCases = {
        {"abcde", "cdeab"},
        {"abcde", "abced"},
        {"a", "a"},
        {"aa", "aa"},
        {"waterbottle", "erbottlewat"}
    };

    for (auto &tc : testCases) {
        cout << "s=\"" << tc.first << "\", goal=\"" << tc.second 
             << "\" -> " << (sol.rotateString(tc.first, tc.second) ? "true" : "false") 
             << endl;
    }

    return 0;
}
