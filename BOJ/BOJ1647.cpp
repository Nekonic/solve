#include <bits/stdc++.h>
using namespace std;
int n,m,par[1000001],cnt,ans;
int root(int x){
    if(!par[x])return x;
    return par[x]=root(par[x]);
}
bool is_unite(int a,int b){
    a=root(a),b=root(b);
    if(a==b)return 1;
    if(a>b)swap(a,b);
    par[a]=b;
    return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> m;
    vector<tuple<int,int,int>> edge(m+1);
    for(int i=0; i<m; i++){
        int w,a,b;
        cin >> a >> b >> w;
        edge[i]={w,a,b};
    }sort(edge.begin(),edge.end());
    for(int i=0; i<m; i++){
        int w,a,b;
        tie(w,a,b)=edge[i];
        if(is_unite(a,b))continue;
        ans+=w;
        cnt++;
        if(cnt==n-2)break;
    }cout << ans;
}