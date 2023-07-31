#include <bits/stdc++.h>
using namespace std;
int n,m,x;
int par[201];
int root(int x){
    if(!par[x])return x;
    return root(par[x]);
}
void merge(int a,int b){
    a=root(a),b=root(b);
    if(a<b)par[b]=a;
    else par[a]=b;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> x;
            if(x&&root(i)!=root(j))merge(i,j);
        }
    }cin >> x;
    int p=root(x);
    for(int i=0; i<m; i++){
        cin >> x;
        if(p!=root(x)){
            cout << "NO";
            return 0;
        }
    }cout << "YES";
}