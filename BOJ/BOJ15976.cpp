#include <bits/stdc++.h>
using namespace std;
long long n,m,idx,val,a,b,ans,st,ed,X[5001],Y[3001],Xi[3001],s[5001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0; i<n; i++)cin >> Xi[i] >> X[i];
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> Y[i] >> val;
        s[i+1]=val+s[i];
    }cin >> a >> b;
    for(int i=m; i<m+10; i++)Y[i]=1LL<<60;
    for(int i=0; i<n; i++){
        long long st=lower_bound(Y,Y+n,Xi[i]+a)-Y;
        long long ed=lower_bound(Y,Y+n,Xi[i]+b+1)-Y;
        ans+=X[i]*(s[ed]-s[st]);
    }cout << ans;
}