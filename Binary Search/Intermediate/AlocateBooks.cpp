#include <bits/stdc++.h>
using namespace std;

bool isFeasible(vector<int> v, int mid, int m) {
    int student = 1, sum = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] + sum > mid) {
            student++;
            sum = v[i];
        } else {
            sum += v[i];
        }
    }
    return student <= m;
}

int findPages(vector<int>& arr, int n, int m) {
    if (m > arr.size()) {
        return -1;
    }
    int lb = INT_MIN, ub = 0;
    for (int i = 0; i < arr.size(); i++) {
        lb = max(lb, arr[i]);
        ub += arr[i];
    }
    int ans = 0;
    while (lb <= ub) {
        int mid = (ub + lb) / 2;
        if (isFeasible(arr, mid, m)) {
            ans = mid;
            ub = mid - 1;
        } else {
            lb = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, m;
    cout << "Enter number of books: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter pages of books: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter number of students: ";
    cin >> m;

    int result = findPages(arr, n, m);
    if (result == -1) {
        cout << "Allocation not possible" << endl;
    } else {
        cout << "Minimum number of pages = " << result << endl;
    }
    return 0;
}
