
#include<bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    vector<int> v={3,1,3,54,6,4,2,1,231,324,53,31,43,2,5,2,532,1};
    int maxi=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>maxi){
            maxi=v[i];
        }
    }
    cout<<"Largest number is "<<maxi;

    return 0;
}