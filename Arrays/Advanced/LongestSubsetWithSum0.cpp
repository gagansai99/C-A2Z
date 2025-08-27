#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxLength(vector<int>& arr) {
        int target = 0;
        long long sum = 0;
        unordered_map<long long,int> m;
        int maxSum = 0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
            if(sum == target){
                maxSum = max(maxSum, i+1);
            }
            if(m.find(sum-target) != m.end()){
                maxSum = max(maxSum, i - m[sum-target]);
            }
            if(m.find(sum) == m.end()){
                m[sum] = i;
            }
        }
        return maxSum;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    Solution ob;
    cout << ob.maxLength(arr) << endl;
    return 0;
}
