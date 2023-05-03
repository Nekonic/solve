#include <bits/stdc++.h>
using namespace std;
const int INF=1<<29;
int n,m,a[101][101],ans=INF,sum,idx;
int main(){
    cin >> n >> m;
    fill(&a[1][1],&a[n][n],INF);
    while (m--){
        int u,v;
        cin >> u >> v;
        a[u][v]=1;
        a[v][u]=1;
    }for(int i=1; i<=n; i++)a[i][i]=0;
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                a[i][j] = min(a[i][j], a[i][k]+a[k][j]);
            }
        }
    }for(int i=1; i<=n; i++){
        sum=0;
        for(int j=1; j<=n; j++){
            sum+=a[i][j];
        }if(ans>sum){
            ans=sum;
            idx=i;
        }
    }cout << idx;
}