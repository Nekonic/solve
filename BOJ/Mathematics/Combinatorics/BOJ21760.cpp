#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    long long tc,n,m,k,d;
    cin >> tc;
    while(tc--){
        cin >> n >> m >> k >> d;
        long long t=k*n*m*(m-1)/2+n*m*(n*m-m)/2;
        long long ans=d/t;
        if(ans>0)cout << ans*t << '\n';
        else cout << "-1\n";
    }
}