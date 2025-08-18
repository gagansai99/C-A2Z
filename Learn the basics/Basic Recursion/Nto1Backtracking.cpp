#include<bits/stdc++.h>
using namespace std;
void NToOne(int start,int n){
    if(start>n) return;
    NToOne(start+1,n);
    cout<<start;
    cout<<endl;
}
int main(){
    NToOne(1,5);
} 