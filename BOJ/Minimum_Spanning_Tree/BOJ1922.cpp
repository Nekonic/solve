#include <bits/stdc++.h>
using namespace std;
int n,m,par[1001],cnt,ans;
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
    vector<tuple<int,int,int>> v;
    for(int i=0; i<m; i++){
        int a,b,c;
        cin>>a>>b>>c;
        v.push_back({c,a,b});
    }sort(v.begin(),v.end());
    for(int i=0; i<m; i++){
        int c,a,b;
        tie(c,a,b)=v[i];
        if(is_unite(a,b))continue;
        ans+=c;
        cnt++;
        if(cnt==n-1)break;
    }cout << ans;
}