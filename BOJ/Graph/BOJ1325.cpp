#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
int n,m,a,b,idx[10001],mx,sum;
vector<vector<int>> G(10001);
vector<bool> seen(10001);
void dfs(int x){
    if(seen[x])return;
    seen[x]=1;
    sum++;
    for(int v:G[x]){
        dfs(v);
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> m;
    while(m--){
        cin >> a >> b;
        G[b].push_back(a);
    }for(int i=1; i<=n; i++){
        fill(seen.begin(),seen.end(),false);
        sum=0;
        dfs(i);
        if(sum>=mx){
            mx=sum;
            idx[i]=mx;
        }
    }for(int i=1; i<=n; i++){
        if(idx[i]==mx)cout << i << ' ';
    }
}