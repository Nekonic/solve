#include <bits/stdc++.h>
using namespace std;
const int inf=1<<29;
int n,m,G[101][101];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> m;
    fill(&G[0][0],&G[n][n],inf);
    while(m--){
        int a,b,c;
        cin >> a >> b >> c;
        G[a][b]=min(G[a][b],c);
    }for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                G[i][j] = min(G[i][j], G[i][k]+G[k][j]);
            }
        }
    }for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(G[i][j]==inf||i==j)cout << "0 ";
            else cout << G[i][j] << ' ';
        }cout << '\n';
    }
}