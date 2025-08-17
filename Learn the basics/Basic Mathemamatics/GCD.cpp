#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,gcd;
    cout<<"Enter first number:";
    cin>>n1;
    cout<<"Enter second number:";
    cin>>n2;
    gcd=max(n1,n2);
    while(true){
        if(gcd%n1==0 && gcd%n2==0){
            break;
        }
        gcd++;
    }
    cout<<"GCD of "<<n1<<" and "<<n2<<" is "<<gcd;
}