#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,hcf=1;
    cout<<"Enter first number:";
    cin>>n1;
    cout<<"Enter second number:";
    cin>>n2;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            hcf=i;
        }
    }
    cout<<"HCF of "<<n1<<" and "<<n2<<" is "<<hcf;
}