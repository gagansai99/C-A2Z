#include <bits/stdc++.h>
using namespace std;

long long func(vector<int>& piles, int hour) {
    long long ans = 0;
    for (int i = 0; i < piles.size(); i++) {
        ans += ceil(double(piles[i]) / double(hour));
    }
    return ans;
}

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int lb = 1, ub = piles[piles.size() - 1], ans;
        while (lb <= ub) {
            int mid = (ub + lb) / 2;
            long long totalCompleted = func(piles, mid);
            if (totalCompleted <= h) {
                ans = mid;
                ub = mid - 1;
            } else {
                lb = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;

    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    cout << "Minimum eating speed: " << s.minEatingSpeed(piles, h) << endl;

    return 0;
}
