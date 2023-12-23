#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
vector<int> p;
priority_queue<int, vector<int>, greater<int>> q;
void f(const Graph&G, int v){
    for(auto next : G[v]){
        if(--p[next]==0)q.push(next);
    }
}
int main(){
    int n,m,a,b;
    cin >> n >> m;
    Graph G(n+1);
    p.assign(n+1,0);
    for(int i=0; i<m; i++){
        cin >> a >> b;
        G[a].push_back(b);
        p[b]++;
    }for(int v=1; v<=n; v++){
        if(!p[v])q.push(v);
    }while(!q.empty()){
        int v = q.top();
        q.pop();
        cout << v << ' ';
        f(G,v);
    }
}