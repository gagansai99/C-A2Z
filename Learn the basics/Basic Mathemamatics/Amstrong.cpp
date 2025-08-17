#include<bits/stdc++.h>
using namespace std;
int power(int num,int exp){
    if(exp==0){
        return 1;
    }
    return num*power(num,exp-1);
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int digits=0,temp=n;
    while(temp>0){
        digits++;
        temp/=10;
    }
    temp=n;
    int sum=0;
    while(temp>0){
        int rem=temp%10;
        sum+=power(rem,digits);
        temp/=10;
    }
    if(sum==n){
        cout<<"The number is an Armstrong number.";
    }
    else{
        cout<<"The number is not an Armstrong number.";
    }
}