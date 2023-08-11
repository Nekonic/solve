#include <bits/stdc++.h>
using namespace std;
long long d[81],f[81];
int main(){
    int n;
    cin >> n;
    d[1]=4;
    d[2]=6;
    f[1]=1;
    f[2]=1;
    for(int i=3; i<=n; i++){
        f[i]=f[i-1]+f[i-2];
        d[i]=d[i-1]+f[i]*2;
    }cout << d[n];
}