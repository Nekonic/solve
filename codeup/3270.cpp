#include <bits/stdc++.h>
using namespace std;
int par[1001];
int root(int x){
    if(par[x]==x)return x;
    return par[x]=root(par[x]);
}
void unite(int x, int y){
    x=root(x);
    y=root(y);
    if(x<y)par[y]=x;
    else par[x]=y;
}
bool same(int x, int y){
    return root(x)==root(y);
}
int main(){
    int n,m,x,y;
    cin >> n >> m;
    for(int i=1; i<=n; i++)par[i]=i;
    for(int i=0; i<m; i++){
        cin >> x >> y;
        unite(x,y);
    }for(int i=1; i<=n; i++)cout << root(i) << ' ';
}