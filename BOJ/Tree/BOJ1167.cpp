#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> g[100001];
bool seen[100001];
int ans,node;
void dfs(int i,int w){
    seen[i]=1;
    if(ans<w){
        node=i;
        ans=w;
    }seen[i]=1;
    for(auto v:g[i]){
        if(seen[v.first])continue;
        dfs(v.first,v.second+w);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n,t,v,w;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> t;
        while(1){
            cin >> v;
            if(v==-1)break;
            cin >> w;
            g[t].push_back({v,w});
        }
    }dfs(1,0);
    fill(seen,seen+100000,0);
    dfs(node,0);
    cout << ans;
}