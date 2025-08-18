#include<bits/stdc++.h>
using namespace std;
void NToOne(int n){
    if(n==0) return;
    cout<<n;
    cout<<endl;
    NToOne(n-1);
}
int main(){
    NToOne(5);
}