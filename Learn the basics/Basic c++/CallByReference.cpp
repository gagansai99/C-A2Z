#include<bits/stdc++.h>
using namespace std;
void CallByReference(int &i){
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
}
int main(){
    int i=10;
    CallByReference(i);
    cout<<i<<endl;
}