#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the starting range:";
    cin>>a;
    cout<<"Enter the ending range:";
    cin>>b;
    int i=a;
    while(i<=b){
        if(i==1){
            i++;
            continue;
        }
        int s=0;
        for(int j=2;j<=pow(i,0.5);j++){
            if(i%j==0){
                s=1;
                
                break;
            }
        }
        if(s==0){
            cout<<i<<" ";
        }
        i++;
    }
}