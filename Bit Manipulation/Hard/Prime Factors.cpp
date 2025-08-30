#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> primeFac(int n) {
        vector<int> v1;
        while (n % 2 == 0) {
            v1.push_back(2);
            while (n % 2 == 0) n /= 2;
        }
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                v1.push_back(i);
                while (n % i == 0) n /= i;
            }
        }
        if (n > 2) v1.push_back(n);
        return v1;
    }
};

int main() {
    Solution s;
    int n;
    cin >> n;
    vector<int> res = s.primeFac(n);
    for (int x : res) cout << x << " ";
    return 0;
}
