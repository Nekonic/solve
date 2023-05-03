#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> G[10001];
int n,a,b,c,m=0,idx=0;
bool seen[10001];
void dfs(int i,int sum){
    if(seen[i])return;
    seen[i]=1;
    for(auto v : G[i]){
        if(seen[v.first])continue;
        if(m<sum+v.second){
            m=sum+v.second;
            idx=v.first;
        }dfs(v.first,sum+v.second);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b >> c;
        G[a].push_back({b,c});
        G[b].push_back({a,c});
    }dfs(1,0);
    fill(&seen[1],&seen[n+1],false);
    dfs(idx,0);
    cout << m;
}