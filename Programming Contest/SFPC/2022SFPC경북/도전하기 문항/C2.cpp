#include <bits/stdc++.h>
using namespace std;
int a[504][504],b[504][504],n,m,ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            b[i][j]=b[i-1][j]+b[i][j-1]-b[i-1][j-1]+a[i][j];
        }
    }
    for(int i=m; i<=n; i++){
        for(int j=m; j<=n; j++){
            ans=max(ans,b[i][j]+b[i-m][j-m]-b[i-m][j]-b[i][j-m]);
        }
    }cout << ans;
}