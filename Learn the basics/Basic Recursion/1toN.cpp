#include<bits/stdc++.h>
using namespace std;
void OneToN(int start,int n){
    if(start>n) return;
    cout<<start;
    cout<<endl;
    OneToN(start+1,n);
}
int main(){
    OneToN(1,5);
}