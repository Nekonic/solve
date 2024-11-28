#include "bits/stdc++.h"
using namespace std;
int n,m,a[501][501],ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cin >> m;
            a[i][j]=max(a[i-1][j-1],a[i-1][j])+m;
        }
    }for(int i=1; i<=n; i++){
        ans=max(a[n][i],ans);
    }cout << ans;
}