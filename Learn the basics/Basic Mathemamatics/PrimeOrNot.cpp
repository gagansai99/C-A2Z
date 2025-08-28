#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=2;i<=pow(n,0.5);i++){
        if(n%i==0){
            s=1;
            cout<<"Not Prime";
            break;
        }
    }
    if(s==0){
        cout<<"Prime";
    }
}