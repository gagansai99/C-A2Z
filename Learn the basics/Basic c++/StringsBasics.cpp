#include<bits/stdc++.h>
using namespace std;
int main(){
    string name="Gagam";
    for(int i=0;i<name.size();i++){
        cout<<name[i]<<" ";
    }
    name[name.size()-1]='n';
    cout<<endl<<name<<endl;
}