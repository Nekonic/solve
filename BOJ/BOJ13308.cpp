#include <bits/stdc++.h>
using namespace std;
long long n,m,city[2501];
vector<pair<int,int>> g[2501];
bool seen[2501][2501];
priority_queue<tuple<long long,long long,long long>, vector<tuple<long long,long long,long long>>, greater<tuple<long long,long long,long long>>> q;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> m;
    for(int i=1; i<=n; i++)cin >> city[i];
    while(m--){
        long long x,y,w;
        cin >> x >> y >> w;
        g[x].push_back({w,y});
        g[y].push_back({w,x});
    }q.push({0,1,city[1]});
    while(!q.empty()){
        long long dist,node,cost;
        tie(dist,node,cost)=q.top(),q.pop();
        if(seen[node][cost])continue;
        if(node==n){
            cout << dist;
            return 0;
        }seen[node][cost]=1;
        for(auto v:g[node]){
            q.push({cost*v.first+dist,v.second,min(cost,city[v.second])});
        }
    }
}