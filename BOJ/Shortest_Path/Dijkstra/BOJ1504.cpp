#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<29;
long long n,m,ans,ans1,ans2,l[4]={1};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    vector<pair<int,int>> g[801];
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    cin >> n >> m;
    while(m--){
        int a,b,c;
        cin >> a >> b >> c;
        g[a].push_back({c,b});
        g[b].push_back({c,a});
    }cin >> l[1] >> l[2];l[3]=n;
    for(int i=0; i<3; i++){
        vector<int> d(n+1,INF);
        d[l[i]]=0;
        q.push({0,l[i]});
        while(!q.empty()){
            auto u=q.top();q.pop();
            if(u.first!=d[u.second])continue;
            for(auto v : g[u.second]){
                if(d[v.second]<=d[u.second]+v.first)continue;
                d[v.second]=d[u.second]+v.first;
                q.push({d[v.second],v.second});
            }
        }ans1+=d[l[i+1]];
    }swap(l[1],l[2]);
    for(int i=0; i<3; i++){
        vector<int> d(n+1,INF);
        d[l[i]]=0;
        q.push({0,l[i]});
        while(!q.empty()){
            auto u=q.top();q.pop();
            if(u.first!=d[u.second])continue;
            for(auto v : g[u.second]){
                if(d[v.second]<=d[u.second]+v.first)continue;
                d[v.second]=d[u.second]+v.first;
                q.push({d[v.second],v.second});
            }
        }ans2+=d[l[i+1]];
    }ans=min(ans1,ans2);
    if(ans>=INF)cout << -1;
    else cout << ans;
}