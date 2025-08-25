#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    pair<int, int> get(int a, int b) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;

        return {a, b};  
    }
};

int main() {
    Solution sol;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    pair<int, int> result = sol.get(a, b);

    cout << "After swapping: a = " << result.first 
         << ", b = " << result.second << endl;

    return 0;
}
