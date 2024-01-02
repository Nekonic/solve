#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
int n,p[100001],a,b;
void f(int v,Graph&G){
    for(int i : G[v]){
        if(p[v]==i)continue;
        p[i]=v;
        f(i,G);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    Graph G(n+1);
    for(int i=1; i<n; i++){
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }f(1,G);
    for(int i=2; i<=n; i++){
        cout << p[i] << '\n';
    }
}