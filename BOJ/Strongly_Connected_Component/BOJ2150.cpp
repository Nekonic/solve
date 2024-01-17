#include <bits/stdc++.h>
using namespace std;
vector<int> g[10001],rg[10001];
vector<vector<int>> components;
vector<bool> seen(10001);
stack<int> s;
int n,m,a,b,numComponents;
void dfs1(int x){
    seen[x]=1;
    for(auto&i:g[x]){
        if(!seen[i])dfs1(i);
    }s.push(x);
}
void dfs2(int x,int cnt){
    seen[x]=1;
    components[cnt].push_back(x);
    for(auto&i:rg[x]){
        if(!seen[i])dfs2(i,cnt);
    }
}
int main(){
    cin >> n >> m;
    while(m--){
        cin >> a >> b;
        g[a].emplace_back(b);
        rg[b].emplace_back(a);
    }for(int i=1; i<=n; i++){
        if(!seen[i])dfs1(i);
    }fill(seen.begin(),seen.end(),0);
    while(!s.empty()){
        int v=s.top();
        s.pop();
        if(!seen[v]){
            components.resize(++numComponents);
            dfs2(v,numComponents-1);
        }
    }cout << numComponents << '\n';
    for(int i=0; i<numComponents; i++){
        sort(components[i].begin(),components[i].end());
    }
    sort(components.begin(),components.end(),
    [](const vector<int> & a, const vector<int> & b){ return a[0] < b[0]; });
    for(int i=0; i<numComponents; i++){
        for(auto&x:components[i]){
            cout << x << ' ';
        }cout << -1 << '\n';
    }
}


//https://www.topcoder.com/thrive/articles/kosarajus-algorithm-for-strongly-connected-components