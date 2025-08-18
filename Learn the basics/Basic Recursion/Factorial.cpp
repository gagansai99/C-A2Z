#include<bits/stdc++.h>
using namespace std;
int Fact(int n){
    if(n==1){
        return 1;
    }
    return n*Fact(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<Fact(n);
}