#include <bits/stdc++.h>
using namespace std;
using Graph = tuple<int,int,int>;
int n,m,par[10001];
int root(int x){
    if(par[x]==x)return x;
    return par[x]=root(par[x]);
}void unite(int x, int y){
    x=root(x);
    y=root(y);
    if(x<y)par[y]=x;
    else par[x]=y;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> m;
    Graph G[100001];
    for(int i=1; i<=m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        G[i]={c,a,b};
    }for(int i=1; i<=n; i++)par[i]=i;
    sort(G+1,G+m+1);
    int cnt=0,ans=0;
    for(int i=1; i<=m; i++){
        int a,b,c;
        tie(c,b,a)=G[i];
        if(root(a)==root(b))continue;
        unite(a,b);
        ans+=c;
        cnt++;
        if(cnt==n-1)break;
    }cout << ans;
}