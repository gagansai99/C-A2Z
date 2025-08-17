#include<bits/stdc++.h>
using namespace std;
void Eculedian(int a,int b){
    int arr[b-a+1];
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        arr[i]=1;
    }
    for(int i=a;i<=b;i++){
        if(arr[i]==1){
            for(int j=i*i;j<=b;j+=i){
                arr[j]=0;
            }
        }
    }
    for(int i=a;i<=b;i++){
        if(arr[i]==1){
            cout<<i<<" ";
    }
}}
int main(){
    int a,b;
    cout<<"Enter both the numbers:"<<endl;
    cin>>a>>b;
    Eculedian(a,b);
}