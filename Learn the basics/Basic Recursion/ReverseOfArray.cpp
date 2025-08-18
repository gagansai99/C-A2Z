#include<bits/stdc++.h>
using namespace std;
void ReverseArray(int arr[],int lb,int ub){
    if(lb>ub){
        return;
    }
    int temp=arr[lb];
    arr[lb]=arr[ub];
    arr[ub]=temp;
    ReverseArray(arr,lb+1,ub-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    ReverseArray(arr,0,sizeof(arr)/sizeof(arr[0])-1);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }
}