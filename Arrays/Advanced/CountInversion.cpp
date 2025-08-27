#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long merge(vector<int>& arr, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        vector<int> L(n1), R(n2);
        for (int i = 0; i < n1; i++) L[i] = arr[left + i];
        for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = left;
        long long c = 0;

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k++] = L[i++];
            } else {
                arr[k++] = R[j++];
                c += (n1 - i);  
            }
        }

        while (i < n1) arr[k++] = L[i++];
        while (j < n2) arr[k++] = R[j++];

        return c;
    }

    long long mergeSort(vector<int>& arr, int left, int right) {
        long long c = 0;
        if (left < right) {
            int mid = left + (right - left) / 2;
            c += mergeSort(arr, left, mid);
            c += mergeSort(arr, mid + 1, right);
            c += merge(arr, left, mid, right);
        }
        return c;
    }

    long long inversionCount(vector<int> &arr) {
        return mergeSort(arr, 0, arr.size() - 1);
    }
};

int main() {
    Solution sol;

    vector<int> arr = {2, 4, 1, 3, 5};  
    cout << "Inversion Count: " << sol.inversionCount(arr) << endl;

    return 0;
}
