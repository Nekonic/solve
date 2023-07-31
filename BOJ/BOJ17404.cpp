#include <bits/stdc++.h>
using namespace std;
const int INF=1<<30;
int n,a[1001][3],d[1001][3],ans=INF;
int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }for(int c=0; c<3; c++){
        fill(&d[0][0],&d[1000][2],INF);
        for(int j=0; j<3; j++)if(c==j)d[1][c]=a[1][c];
        for(int i=2; i<=n; i++){
            d[i][0] = min(d[i-1][1],d[i-1][2])+a[i][0];
            d[i][1] = min(d[i-1][0],d[i-1][2])+a[i][1];
            d[i][2] = min(d[i-1][1],d[i-1][0])+a[i][2];
        }for(int j=0;j<3;j++)if(c!=j)ans=min(ans, d[n][j]);
    }
    cout<<ans;
}