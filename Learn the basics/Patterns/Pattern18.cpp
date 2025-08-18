// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n=5;
        int ascii=65+n-1;
    for(int i=1;i<=n;i++){
        int temp=ascii;
        for(int j=1;j<=i;j++){
            cout<<(char)temp;
            temp++;
        }
            ascii--;
        cout<<endl;
    }
    return 0;
}