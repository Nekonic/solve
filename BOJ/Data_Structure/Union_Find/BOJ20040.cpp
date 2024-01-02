#include <bits/stdc++.h>
using namespace std;
int n,m,u,v,par[500001];
int root(int x){
    if(!par[x])return x;
    return par[x]=root(par[x]);
}
bool merge(int a,int b){
    a=root(a),b=root(b);
    if(a==b)return 1;
    if(a<b)swap(a,b);
    par[b]=a;
    return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        cin >> u >> v;
        if(merge(u,v)){
            cout << i;
            return 0;
        }
    }cout << 0;
}