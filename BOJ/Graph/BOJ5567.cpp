#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
int n,m,a,b,cnt;
bool seen[501];
void f(int v, int d, Graph&G){
    if(d==2)return;
    if(!seen[v])cnt++;
    seen[v]=1;
    for(int i : G[v]){
        f(i,d+1,G);
    }
}
int main(){
    cin >> n >> m;
    Graph G(n+1);
    for(int i=0; i<m; i++){
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }seen[1]=1;
    for(int v : G[1]){
        f(v,0,G);
    }cout << cnt;
}