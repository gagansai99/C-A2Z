#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        vector<int> v;
        for(int i=1;i<=n;i++){
            v.push_back(1);
        }
        for(int i=2;i*i<n;i++){
            if(v[i]==1){
                for(long long j=i*i;j<n;j+=i){
                    v[j]=0;
                }
            }
        }
        int c=0;
        for(int i=2;i<n;i++){
            if(v[i]==1){
                c++;
            }
        }
        return c;
        
    }
};
int main() {
    Solution sol;
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Number of primes less than " << n << " = " << sol.countPrimes(n) << endl;
    return 0;
}