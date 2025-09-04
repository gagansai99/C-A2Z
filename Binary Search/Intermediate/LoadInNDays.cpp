#include <bits/stdc++.h>
using namespace std;

int Counting(vector<int> &weights,int capacity){
    int days=1,sum=0;
    for(int i=0;i<weights.size();i++){
        sum+=weights[i];
        if(sum>capacity){
            days++;
            sum=weights[i];
        }
    }
    return days;
}

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int lb=INT_MIN,ub=0;
        for(int i=0;i<weights.size();i++){
            lb=max(lb,weights[i]); // at least max weight
            ub+=weights[i];        // at most total sum
        }
        while(lb<=ub){
            int mid=(ub+lb)/2;
            int noOfDays=Counting(weights,mid);
            if(noOfDays<=days){
                ub=mid-1;  // try smaller capacity
            }
            else{
                lb=mid+1;  // need bigger capacity
            }
        }
        return lb;
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<int> weights1 = {1,2,3,4,5,6,7,8,9,10};
    int days1 = 5;
    cout << "Minimum capacity: " << sol.shipWithinDays(weights1, days1) << endl;

    // Example 2
    vector<int> weights2 = {3,2,2,4,1,4};
    int days2 = 3;
    cout << "Minimum capacity: " << sol.shipWithinDays(weights2, days2) << endl;

    return 0;
}
