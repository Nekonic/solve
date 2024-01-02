#include <bits/stdc++.h>
using namespace std;
const int mod=15746;
int d[1000001]={0,1,2,3,5},n;
int main(){
    cin >> n;
    for(int i=5; i<=n; i++){
        d[i]=(d[i-1]+d[i-2])%mod;
    }cout << d[n];
}