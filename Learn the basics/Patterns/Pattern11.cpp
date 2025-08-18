// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n=5,c=1;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            cout<<c;
            if(c==0){
                c=1;
            }
            else{
                c=0;
            }
        }
        cout<<endl;
    }
    return 0;
}