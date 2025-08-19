#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={3,1,3,54,6,4,2,1,231,53,31,43,2,5,2,1,324,532};
    int max1=INT_MIN,max2=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>max1){
            if(max1>max2){
                max2=max1;
            }
            max1=v[i];
        }
        else if(v[i]>max2 && v[i]<max1){
            max2=v[i];
        }
    }
    cout<<"Second Largest number is "<<max2;
}