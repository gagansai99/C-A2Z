// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n=5;
    for(int i=1;i<=n;i++){
        int ascii=65;
        for(int j=1;j<=n-i+1;j++){
            cout<<(char)ascii;
            ascii++;
        }
        cout<<endl;
    }
    return 0;
}