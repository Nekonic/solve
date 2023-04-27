#include <bits/stdc++.h>
using namespace std;
int par[200001];
int find(int n){
    if(par[n]==0)return n;
    return find(par[n]);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,q,a;
    cin >> n >> q;
    for(int i=2; i<=n; i++){
        cin >> par[i];
    }
    while(q--){
        int b,c,d;
        cin >> b >> c >> d;
        if(d==0){
            if(find(b)==find(c))cout << "YES\n";
            else cout << "NO\n";
        }else{
            if(find(b)==find(c)){
                cout << "YES\n";
                par[b]=0;
            }else{
                cout << "NO\n";
                par[c]=0;
            }
        }
    }
}