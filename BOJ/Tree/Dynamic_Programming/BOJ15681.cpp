#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
int n,r,q,a,b,cnt,par[100001],vc[100001];
int makeTree(int v,Graph&G){
    for(auto i : G[v]){
        if(par[v]==i)continue;
        par[i]=v;
        vc[v]+=makeTree(i,G);
    }vc[v]++;
    return vc[v];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> r >> q;
    Graph G(n+1);n--;
    while(n--){
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }makeTree(r,G);
    while(q--){
        cin >> a;
        cout << vc[a] << '\n';
    }
}