#include <bits/stdc++.h>
using namespace std;
int base[1001][1001]={};
int g[1001][1001]={};
int n,m,mxs=0;
queue<pair<int,int>> q;
int main(){
    cin >> m >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> base[i][j];
            if(base[i][j]==1)q.push({i,j});
            if(base[i][j]==0)g[i][j]=-1;
        }
    }
    while(!q.empty()){
        auto x = q.front(); q.pop();
        int i=x.first;
        int j=x.second;
        if(i+1<n&&g[i+1][j]<0){
            q.push(make_pair(i+1,j));
            g[i+1][j]=g[i][j]+1;
        }if(i-1>=0&&g[i-1][j]<0){
            q.push(make_pair(i-1,j));
            g[i-1][j]=g[i][j]+1;
        }if(j+1<m&&g[i][j+1]<0){
            q.push(make_pair(i,j+1));
            g[i][j+1]=g[i][j]+1;
        }if(j-1>=0&&g[i][j-1]<0){
            q.push(make_pair(i,j-1));
            g[i][j-1]=g[i][j]+1;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(g[i][j]==-1){
                cout << -1;
                return 0;
            }mxs = max(mxs,g[i][j]);
        }
    }cout << mxs;
}