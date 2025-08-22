#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> v;
        set<int> s;
        for(int i = 0; i < a.size(); i++) {
            s.insert(a[i]);
        }
        for(int i = 0; i < b.size(); i++) {
            s.insert(b[i]);
        }
        for(auto i : s) {
            v.push_back(i);
        }
        return v;
    }
};

int main() {
    Solution sol;

    vector<int> a = {1, 2, 4, 5, 6};
    vector<int> b = {2, 3, 5, 7};

    vector<int> result = sol.findUnion(a, b);

    cout << "Union of arrays: ";
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
