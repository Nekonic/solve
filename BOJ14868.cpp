#include <bits/stdc++.h>
using namespace std;
int n,m,x,y,mxs=0,g[2001][2001];
int main(){
    queue<pair<int,int>> q;
    cin >> n >> m;
    fill(&g[1][1],&g[n][n],-1);
    for(int i=0; i<m; i++){
        cin >> x >> y;
        g[x][y]=0;
        q.push({x,y});
    }while(!q.empty()){
        auto x = q.front(); q.pop();
        int i=x.first;
        int j=x.second;
        if(i+1<=n&&g[i+1][j]<0){
            q.push({i+1,j});
            g[i+1][j]=g[i][j]+1;
        }if(i-1>0&&g[i-1][j]<0){
            q.push({i-1,j});
            g[i-1][j]=g[i][j]+1;
        }if(j+1<=n&&g[i][j+1]<0){
            q.push({i,j+1});
            g[i][j+1]=g[i][j]+1;
        }if(j-1>0&&g[i][j-1]<0){
            q.push({i,j-1});
            g[i][j-1]=g[i][j]+1;
        }for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cout << g[i][j] << ' ';
            }cout << '\n';
        }cout << '\n';
    }for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            mxs = max(mxs,g[i][j]);
        }
    }cout << mxs;
}