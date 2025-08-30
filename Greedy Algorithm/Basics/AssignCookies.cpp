#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0, j = 0, c = 0;
        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                c++;
                i++;
                j++;
            } else {
                j++;
            }
        }
        return c;
    }
};

int main() {
    int n, m;
    cin >> n;  
    vector<int> g(n);
    for (int i = 0; i < n; i++) cin >> g[i];

    cin >> m;  
    vector<int> s(m);
    for (int i = 0; i < m; i++) cin >> s[i];

    Solution sol;
    cout << sol.findContentChildren(g, s);
    return 0;
}
