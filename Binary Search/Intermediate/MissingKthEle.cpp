#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 1, j = 0;
        while (true) {
            if (j < arr.size() && arr[j] == i) {
                j++; // number is present in arr
            } else {
                k--; // number is missing
                if (k == 0) return i; // found the kth missing
            }
            i++;
        }
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<int> arr1 = {2,3,4,7,11};
    int k1 = 5;
    cout << "Kth missing number: " << sol.findKthPositive(arr1, k1) << endl;

    // Example 2
    vector<int> arr2 = {1,2,3,4};
    int k2 = 2;
    cout << "Kth missing number: " << sol.findKthPositive(arr2, k2) << endl;

    return 0;
}
