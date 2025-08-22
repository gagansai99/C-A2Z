#include <iostream>
using namespace std;
int main() {
    
    int arr[]={1,43,1,1,43,1,42,12,23,14,23,4,643,1,4221,4,31,321,-43,0,-1,32};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<=n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>-1&&arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
}