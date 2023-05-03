#include <bits/stdc++.h>
using namespace std;
const int INF=1<<30;
vector<pair<int,int>> g[1001];
vector<int> ans(1001,INF);
vector<int> vis(1001,0),path;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n,m,s,e;
    cin >> n >> m;
    while(m--){
        int a,b,w;
        cin >> a >> b >> w;
        g[a].push_back({w,b});
    }cin >> s >> e;
    ans[s]=0;
    q.push({ans[s],s});
    while(!q.empty()){
        auto v=q.top();q.pop();
        if(v.first!=ans[v.second])continue;
        for(auto i : g[v.second]){
            if(ans[i.second]<=i.first+ans[v.second])continue;
            ans[i.second]=i.first+ans[v.second];
            vis[i.second]=v.second;
            q.push({ans[i.second],i.second});
        }
    }cout << ans[e] << '\n';
    while(e!=0){
        path.push_back(e);
        e=vis[e];
    }cout << path.size() << '\n';
    reverse(path.begin(),path.end());
    for(int i : path)cout << i << ' ';
}