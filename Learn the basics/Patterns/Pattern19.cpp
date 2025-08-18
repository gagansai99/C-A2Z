#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    for(int i=1;i<=2*n;i++){
        if(i<=n){
            for(int j=1;j<=n-i+1;j++){
                cout<<"*";
            }
            for(int j=1;j<=2*i-2;j++){
                cout<<" ";
            }
            for(int j=1;j<=n-i+1;j++){
                cout<<"*";
            }
        }
        else{
            for(int j=1;j<=i-n;j++){
                cout<<"*";
            }
            for(int j=1;j<=2*(2*n-i);j++){
                cout<<" ";
            }
            for(int j=1;j<=i-n;j++){
                cout<<"*";
            }
        }
        
        cout<<endl;
    }
}