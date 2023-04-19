#include <bits/stdc++.h>
using namespace std;
int n,k,mod=1000000007;
long long f(long long a,long long b){
    if(b==1)return a%mod;
    if(b%2==0)return f(a%mod*a%mod,b/2)%mod;
    return f(a,b-1)*a%mod;
}
int main(){
    cin >> n >> k;
    cout << f(n,k);
}