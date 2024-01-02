#include <bits/stdc++.h>
using namespace std;
const int INF=1<<29;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n,m,r,a[101][101],item[101],sum,ans=0;
    cin >> n >> m >> r;
    fill(&a[1][1],&a[n][n],INF);
    for(int i=1; i<=n; i++){
        cin >> item[i];
        a[i][i]=0;
    }
    while(r--){
        int x,y,l;
        cin >> x >> y >> l;
        a[x][y]=l;
        a[y][x]=l;
    }for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                a[i][j] = min(a[i][j], a[i][k]+a[k][j]);
            }
        }
    }for(int i=1; i<=n; i++){
        sum=0;
        for(int j=1; j<=n; j++){
            if(a[i][j]>m)continue;
            sum+=item[j];
        }ans=max(ans,sum);
    }cout << ans;
}