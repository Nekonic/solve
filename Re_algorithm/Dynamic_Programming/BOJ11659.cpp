#include "bits/stdc++.h"
using namespace std;
int d[100001],n,m,a,b;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> a;
        d[i]=d[i-1]+a;
    }while(m--){
        cin >> a >> b;
        cout << d[b]-d[a-1] << '\n';
    }
}