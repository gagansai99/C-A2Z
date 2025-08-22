#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> m;
        vector<int> v;

        for(int i=0;i<n;i++){
            m[arr[i]]++;
            if(m[arr[i]]==2){
                v.push_back(arr[i]); 
            }
        }

        for(int j=1;j<=n;j++){
            if(m.find(j)==m.end()){
                v.push_back(j); 
                break;
            }
        }
        return v; 
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1,3,3};
    vector<int> ans = sol.findTwoElement(arr);

    cout << "Repeating: " << ans[0] << ", Missing: " << ans[1] << endl;
}
