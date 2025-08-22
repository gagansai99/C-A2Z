
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v={3,1,3,54,6,4,2,1,231,324,53,31,43,2,5,2,532,1};
    int key,s=0;
    cout<<"Ener the element you want to search:";
    cin>>key;
    for(int i=0;i<v.size();i++){
        if(v[i]==key){
            s=1;
            cout<<"Element found";
            break;
        }
    }
    if(s==0){
        cout<<"Element not found";
    }

    return 0;
}