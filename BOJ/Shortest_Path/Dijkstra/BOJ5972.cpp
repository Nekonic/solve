#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<30;
vector<pair<int,int>> g[50001];
vector<int> ans(50001,INF);
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
int n,m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> m;
    while(m--){
        int a,b,c;
        cin >> a >> b >> c;
        g[a].push_back({c,b});
        g[b].push_back({c,a});
    }ans[1]=0;
    q.push({ans[1],1});
    while(!q.empty()){
        int w,v;
        tie(w,v)=q.top(),q.pop();
        if(ans[v]!=w)continue;
        for(pair<int,int> next:g[v]){
            int nw=w+next.first,nv=next.second;
            if(ans[nv]<=nw)continue;
            ans[nv]=nw;
            q.push({nw,nv});
        }
    }cout << ans[n];
}