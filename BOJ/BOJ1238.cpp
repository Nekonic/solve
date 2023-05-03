#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<29;
int n,m,x,ans;
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
vector<pair<int,int>> a[1001];
vector<int> d(1001,INF);
int main(){
    cin >> n >> m >> x;
    while(m--){
        int s,e,t;
        cin >> s >> e >> t;
        a[s].push_back({t,e});
    }d[x]=0;
    q.push({d[x],x});
    while(!q.empty()){
        auto u=q.top();q.pop();
        if(d[u.second]!=u.first)continue;
        for(auto v : a[u.second]){
            if(d[v.second]<=d[u.second]+v.first)continue;
            d[v.second]=d[u.second]+v.first;
            q.push({d[v.second],v.second});
        }
    }for(int i=1; i<=n; i++){
        vector<int> t(1001,INF);
        t[i]=0;
        q.push({t[i],i});
        while(!q.empty()){
            auto u=q.top();q.pop();
            if(t[u.second]!=u.first)continue;
            for(auto v : a[u.second]){
                if(t[v.second]<=t[u.second]+v.first)continue;
                t[v.second]=t[u.second]+v.first;
                q.push({t[v.second],v.second});
            }
        }ans=max(t[x]+d[i],ans);
    }
    cout << ans;
}