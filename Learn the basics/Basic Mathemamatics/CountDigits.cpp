#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number";
    cin>>n;
    int c=0;
    while(n>0){
        c++;
        n=n/10;

    }
    cout<<"The number of digits in the number is "<<c;
}