#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,string>> p1={1,{1,"Gagan"}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    pair<int,int> arr[]={{1,5},{2,3}};
    cout<<arr[1].second;
}