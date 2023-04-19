#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
bool seen[500];
int n,m,a,b,cnt;
void f(int x,int d, Graph&G){
    if(seen[x]||d>2)return;
    seen[x]=1;
    for(auto v : G[x]){
        f(v,d+1,G);
    }cnt++;
}
int main(){
    cin >> n >> m;
    Graph G(n+1);
    for(int i=0; i<m; i++){
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }f(1,0,G);
    cout << cnt;
}