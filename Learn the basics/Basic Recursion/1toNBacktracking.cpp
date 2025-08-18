#include<bits/stdc++.h>
using namespace std;
void OneToN(int n){
    if(n==0) return;
    OneToN(n-1);
    cout<<n;
    cout<<endl;
}
int main(){
    OneToN(5);
}