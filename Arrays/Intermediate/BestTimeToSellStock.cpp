#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX, maxi = 0;
        for (int i = 0; i < prices.size(); i++) {
            mini = min(mini, prices[i]);              
            maxi = max(maxi, prices[i] - mini);       
        }
        return maxi;
    }
};

int main() {
    Solution sol;

    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Max profit: " << sol.maxProfit(prices) << endl; 

    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << "Max profit: " << sol.maxProfit(prices2) << endl; 

    return 0;
}
