#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int key,int lb,int ub){
    if(lb<=ub){
        int mid=(lb+ub)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            return BinarySearch(arr,key,lb,mid-1);
        }
        else{
            return BinarySearch(arr,key,mid+1,ub);
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int key;
    cout<<"Enter the element you want to search:";
    cin>>key;
    cout<<"Element at "<<BinarySearch(arr,key,0,9);
}