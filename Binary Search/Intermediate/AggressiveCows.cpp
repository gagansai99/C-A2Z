#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlace(vector<int>& stalls, int cows, int dist) {
        int count = 1; // first cow placed
        int lastPos = stalls[0];

        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - lastPos >= dist) {
                count++;
                lastPos = stalls[i];
            }
            if (count >= cows) return true;
        }
        return false;
    }

    int aggressiveCows(vector<int>& stalls, int cows) {
        sort(stalls.begin(), stalls.end());
        int low = 1, high = stalls.back() - stalls.front();
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canPlace(stalls, cows, mid)) {
                ans = mid;
                low = mid + 1; // try for bigger distance
            } else {
                high = mid - 1; // reduce distance
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    int n, cows;
    cout << "Enter number of stalls: ";
    cin >> n;
    vector<int> stalls(n);
    cout << "Enter stall positions: ";
    for (int i = 0; i < n; i++) cin >> stalls[i];
    cout << "Enter number of cows: ";
    cin >> cows;

    int result = sol.aggressiveCows(stalls, cows);
    cout << "Maximum minimum distance between cows = " << result << endl;

    return 0;
}
