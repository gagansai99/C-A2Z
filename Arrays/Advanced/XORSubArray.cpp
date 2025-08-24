#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(vector<int> &A, int B) {
        int prefixXor = 0, count = 0;
        unordered_map<int, int> freq;

        freq[0] = 1; 

        for (int i = 0; i < A.size(); i++) {
            prefixXor ^= A[i]; 

            if (freq.find(prefixXor ^ B) != freq.end()) {
                count += freq[prefixXor ^ B];
            }

            freq[prefixXor]++;
        }

        return count;
    }
};

int main() {
    Solution s;

    vector<int> A = {4, 2, 2, 6, 4};
    int B = 6;

    int result = s.solve(A, B);
    cout << "Number of subarrays with XOR = " << B << " is: " << result << endl;

    return 0;
}
