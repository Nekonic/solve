#include <bits/stdc++.h>
using namespace std;
int par[100001],n,m,a,b,c;
int cn[100001];
int find(int x){
    if(par[x]==x)return x;
    return par[x]=find(par[x]);
}void unite(int a,int b){
    int x=find(a);
    int y=find(b);
    if(x>y)par[x]=y;
    else par[y]=x;
}
int main(){
    cin >> n >> m;
    for(int i=1; i<=n; i++)par[i]=i;
    while(m--){
        cin >> a >> b;
        unite(a,b);
    }cin >> c;
    while(c--){
        cin >> a >> b;
        cn[find(a)]=b;
    }for(int i=1; i<=n; i++){
        int x=find(i);
        cout << cn[x] << ' ';
    }
}