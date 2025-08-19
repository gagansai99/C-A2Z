#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1={1,2,3};
    vector<int> v2(5,9);
    cout<<v1[1]<<endl;
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(8);
    v1.pop_back();
    v1.insert(v1.begin()+2,6);
    cout<<v1[2]<<endl;
    int c=count(v1.begin(),v1.end(),6);
    cout<<c;
}