#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number";
    cin>>n;
    int sum=0;
    while(n>0){
        int rem=n%10;
        sum=sum*10+rem;
        n=n/10;

    }
    cout<<"The reverse of the number is "<<sum;
}