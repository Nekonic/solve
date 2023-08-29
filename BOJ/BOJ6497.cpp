#include <bits/stdc++.h>
using namespace std;
priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> q;
int par[200001];
int root(int x){
    if(par[x]==0)return x;
    return par[x]=root(par[x]);
}
bool isUnite(int a,int b){
    a=root(a),b=root(b);
    return a==b;
}
void merge(int a,int b){
    a=root(a),b=root(b);
    if(a>b)swap(a,b);
    par[a]=b;
}
bool solve(){
    int n,m,mst=0,mw=0;
    cin >> n >> m;
    if(n==0&&m==0)return 0;
    while(m--){
        int a,b,w;
        cin >> a >> b >> w;
        q.push({w,a,b});
        mw+=w;
    }
    while(!q.empty()){
        int a,b,w;
        tie(w,a,b)=q.top(),q.pop();
        if(isUnite(a,b))continue;
        merge(a,b);
        mst+=w;
    }cout << mw-mst <<'\n';
    fill(par,par+200001,0);
    return 1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    while(solve());
}