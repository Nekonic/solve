#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
bool seen[101];
int n,m,a,b,cnt=0;
void f(int x, Graph&g){
    if(seen[x])return;
    seen[x]=1;
    cnt++;
    for(int i : g[x]){
        if(!seen[i])f(i,g);
    }
}
int main(){ 
    cin >> n >> m;
    Graph g(n+1);
    while(m--){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }f(1,g);
    cout << cnt-1;
}
