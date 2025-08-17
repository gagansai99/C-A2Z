#include<bits/stdc++.h>
using namespace std;
void CallByValue(int i){
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
}
int main(){
    int i=10;
    CallByValue(i);
    cout<<i<<endl;
}