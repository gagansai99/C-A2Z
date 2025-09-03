#include <bits/stdc++.h>
using namespace std;

int process(vector<int> &v,int mid,int m,int k){
    int count=0,noOfBq=0;
    for(int i=0;i<v.size();i++){
        if(v[i]<=mid){
            count++;
        }
        else{
            noOfBq+=(count/k);
            count=0;
        }
    }
    noOfBq+=(count/k);
    return noOfBq>=m;
}

class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1LL * m * k > bloomDay.size()) return -1; // Not enough flowers
        int lb=INT_MAX,ub=INT_MIN;
        for(int i=0;i<bloomDay.size();i++){
            lb=min(lb,bloomDay[i]);
            ub=max(ub,bloomDay[i]);
        }
        int ans=-1;
        while(lb<=ub){
            int mid=(ub+lb)/2;
            if(process(bloomDay,mid,m,k)){
                ans=mid;
                ub=mid-1;
            }
            else{
                lb=mid+1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> bloomDay = {1,10,3,10,2};
    int m = 3, k = 1;
    
    cout << "Minimum days required: " << sol.minDays(bloomDay, m, k) << endl;

    // You can test with another case
    vector<int> bloomDay2 = {1,10,3,10,2};
    m = 3, k = 2;
    cout << "Minimum days required: " << sol.minDays(bloomDay2, m, k) << endl;

    return 0;
}
