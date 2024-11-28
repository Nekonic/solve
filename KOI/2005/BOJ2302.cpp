#include <bits/stdc++.h>
using namespace std;
long long n,m,x,ans=1,t=1;
long long d[41];
long long fibo(long long i){
    if(i<=1)return 1;
    if(d[i])return d[i];
    return d[i]=fibo(i-1)+fibo(i-2);
}
int main(){
    cin >> n >> m;
    while(m--){
        cin >> x;
        if(x-t>0)ans*=fibo(x-t);
        t=x+1;
    }if(n-t+1>0)ans*=fibo(n-t+1);
    cout << ans;
}