#include <bits/stdc++.h>
using namespace std;
int tc,n,siz[200003],par[200003];
int root(int x){
    if(par[x]==x)return x;
    return par[x]=root(par[x]);
}
void merge(int a,int b){
    a=root(a),b=root(b);
    if(a==b)return;
    if(a>b)swap(a,b);
    par[b]=a;
    siz[a]+=siz[b];
}
void solve(){
    fill(siz,siz+200002,1);
    for(int i=0; i<200003; i++)par[i]=i;
    cin >> n;
    int x=0;
    map<string,int> m;
    for(int i=0; i<n; i++){
        string a,b;
        cin >> a >> b;
        if(!m.count(a))m[a]=++x;
        if(!m.count(b))m[b]=++x;
        merge(m[a],m[b]);
        cout << siz[root(m[a])] << '\n';
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> tc;
    while(tc--)solve();
}