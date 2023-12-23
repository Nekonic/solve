#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<30;
vector<pair<int,int>> g[20001];
vector<int> ans(20001,INF);
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n,m,k;
    cin >> n >> m >> k;
    while(m--){
        int u,v,w;
        cin >> u >> v >> w;
        g[u].push_back({v,w});
    }ans[k]=0;
    //비용을 먼저 비교함
    q.push({ans[k],k});
    while(!q.empty()){
        auto uw=q.top();
        q.pop();
        if(ans[uw.second]!=uw.first)continue;
        for(auto v : g[uw.second]){
            if(ans[v.first]<=v.second+ans[uw.second])continue;
            ans[v.first]=v.second+ans[uw.second];
            q.push({ans[v.first],v.first});
        }
    }for(int i=1; i<=n; i++){
        if(ans[i]==INF)cout << "INF\n";
        else cout << ans[i] << '\n';
    }
}