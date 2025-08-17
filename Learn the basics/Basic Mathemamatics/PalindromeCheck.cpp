#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number";
    cin>>n;
    int sum=0,temp=n;
    while(temp>0){
        int rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;

    }
    if(sum==n){
        cout<<"THe number is palindrome";
    }
    else{
        cout<<"The number is not palindrome";
    }
}