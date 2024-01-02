#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
bool isTree,seen[501];
int par[501],cnt;
void dfs(int v,Graph&G){
    for(auto i : G[v]){
        if(par[v]==i)continue;
        par[i]=v;
        if(seen[i]){
            isTree=0;
            continue;
        }seen[i]=1;
        dfs(i,G);
    }
}
int main(){
    int n,m,a,b,t=0;
    while(1){
        cin >> n >> m;
        if(!n&&!m)return 0;
        Graph G(n+1);
        while(m--){
            cin >> a >> b;
            G[a].push_back(b);
            G[b].push_back(a);
        }fill(par,par+n+1,0);
        fill(seen,seen+n+1,false);
        cnt=0;
        for(int i=1; i<=n; i++){
            if(seen[i])continue;
            isTree=1;
            dfs(i,G);
            cnt+=isTree;
        }cout << "Case " << ++t << ": ";
        if(!cnt)cout << "No trees.\n";
        else if(cnt==1)cout << "There is one tree.\n";
        else cout << "A forest of "<< cnt <<" trees.\n";
    }
}