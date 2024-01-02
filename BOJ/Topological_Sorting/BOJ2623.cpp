#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
int n,m,deg[1001];
vector<int> order;
queue<int> q;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> m;
    Graph G(n+1);
    int t,a,b;
    while(m--){
        cin >> t;
        if(t==0)continue;
        cin >> a;
        while(--t){
            cin >> b;
            G[a].push_back(b);
            deg[b]++;
            a=b;
        }
    }for(int i=1; i<=n; i++){
        if(!deg[i])q.push(i);
    }while(!q.empty()){
        int v = q.front(); q.pop();
        order.push_back(v);
        for(int i : G[v]){
            if(--deg[i]==0)q.push(i);
        }
    }if(order.size()!=n)cout << 0;
    else for(int v : order)cout << v << '\n';
}