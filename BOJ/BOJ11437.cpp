#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
int par[50001],d[50001];
bool seen[50001];
int lca(int a,int b){
    while(d[a]!=d[b]){
        if(d[a]>d[b])a=par[a];
        else b=par[b];
    }while(a!=b){
        a=par[a];
        b=par[b];
    }return a;
}void dep(int n,int depth,Graph&G){
    seen[n]=1;
    d[n]=depth;
    for(int v:G[n]){
        if(!seen[v]){
            par[v]=n;
            dep(v,depth+1,G);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,m,a,b;
    cin >> n;
    Graph G(n+1);
    for(int i=1; i<n; i++){
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }d[0]=0;
    dep(1,0,G);
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> a >> b;
        cout << lca(a,b) << '\n';
    }
}