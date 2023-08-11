#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<30;
int n,d,c,tc;
void solve(){
    cin >> n >> d >> c;
    vector<vector<pair<int,int>>>g(10001);
    vector<int> ans(n+1,INF);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    while(d--){
        int a,b,s;
        cin >> a >> b >> s;
        g[b].push_back({s,a});
    }ans[c]=0;
    q.push({0,c});
    while(!q.empty()){
        int w,v;
        tie(w,v)=q.top(),q.pop();
        if(ans[v]!=w)continue;
        for(auto next:g[v]){
            int nw,nv;
            tie(nw,nv)=next;
            if(ans[nv]<=ans[v]+nw)continue;
            ans[nv]=ans[v]+nw;
            q.push({ans[nv],nv});
        }
    }int cnt=0,res=0;
    for(int i=1; i<=n; i++){
        if(ans[i]!=INF){
            cnt++;
            res=max(ans[i],res);
        }
    }cout << cnt << ' ' << res << '\n';
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> tc;
    while(tc--)solve();
}