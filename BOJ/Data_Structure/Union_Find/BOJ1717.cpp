#include <bits/stdc++.h>
using namespace std;
int par[1000001];
int root(int x){
    if(par[x]==x)return x;
    return root(par[x]);
}
bool find(int a,int b){
    if(root(a)==root(b))return 1;
    else return 0;
}
void Union(int a,int b){
    a=root(a);b=root(b);
    if(a>b)par[b]=a;
    else par[a]=b;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i=1; i<=n; i++)par[i]=i;
    while(m--){
        int x,a,b;
        cin >> x >> a >> b;
        if(x){
            if(find(a,b))cout<<"YES\n";
            else cout<<"NO\n";
        }else Union(a,b);
    }
}