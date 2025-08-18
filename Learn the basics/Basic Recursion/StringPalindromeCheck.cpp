#include<bits/stdc++.h>
using namespace std;
bool StringPalindrome(string str,int lb,int ub){
    if(lb>ub){
        return true;
    }
    if(str[ub]!=str[lb]){
        return false;
    }
    return StringPalindrome(str,lb+1,ub-1);
}
int main(){
    string str="abba";
    bool check=StringPalindrome(str,0,str.size()-1);
    if(check==false){
        cout<<"String is not a palindrome"<<endl;
    }
    else{
        cout<<"String is a palindrome"<<endl;
    }
}