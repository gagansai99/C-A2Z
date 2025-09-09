#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int i = 0, j = 0;
        vector<int> v;

        while (i < a.size() && j < b.size()) {
            if (a[i] > b[j]) {
                v.push_back(b[j]);
                j++;
            } else {
                v.push_back(a[i]);
                i++;
            }
        }

        while (i < a.size()) {
            v.push_back(a[i]);
            i++;
        }

        while (j < b.size()) {
            v.push_back(b[j]);
            j++;
        }

        return v[k - 1];
    }
};

int main() {
    Solution sol;

    vector<int> a = {2, 3, 6, 7, 9};
    vector<int> b = {1, 4, 8, 10};
    int k = 5;

    cout << "The " << k << "th element is: " << sol.kthElement(a, b, k) << endl;

    // Another test
    vector<int> a2 = {100, 112, 256, 349, 770};
    vector<int> b2 = {72, 86, 113, 119, 265, 445, 892};
    int k2 = 7;

    cout << "The " << k2 << "th element is: " << sol.kthElement(a2, b2, k2) << endl;

    return 0;
}
