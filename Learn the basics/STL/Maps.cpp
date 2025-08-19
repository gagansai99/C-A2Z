#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> m;
    int arr[]={2,5,2,3,6,3,1,7,4,6,7,3,2,6,7,7,7,7,8,3,2,5,0,8,9,4,9,5,4};
    for(auto i:arr){
        m[i]++;
    }
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}