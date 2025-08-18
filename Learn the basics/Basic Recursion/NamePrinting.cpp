#include<bits/stdc++.h>
using namespace std;
void Name(int n){
    if(n==0) return;
    cout<<"Gagan";
    cout<<endl;
    Name(n-1);
}
int main(){
    Name(5);
}