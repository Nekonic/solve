#include <bits/stdc++.h>
using namespace std;
long long n,x,y,ans=0;
pair<long long,long long> p[100001];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    p[0]={-1,-1};
    for(int i=1; i<=n; i++){
        cin >> x >> y;
        p[i]={y,x};
    }sort(p+1,p+n+1);
    for(int i=1; i<=n; i++){
        long long t=1LL<<60;
        if(p[i].first==p[i+1].first)t=p[i+1].second-p[i].second;
        if(p[i].first==p[i-1].first)t=min(t,p[i].second-p[i-1].second);
        if(t!=1LL<<60)ans+=t;
    }cout << ans;
}