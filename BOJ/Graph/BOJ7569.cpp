#include <bits/stdc++.h>
using namespace std;
int n,m,h,base[110][110][110],g[110][110][110],mx=0;
queue<tuple<int,int,int>> q;
int main(){
    cin >> m >> n >> h;
    for(int k=0; k<h; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> base[i][j][k];
                if(base[i][j][k]==1)q.push(make_tuple(i,j,k));
                if(base[i][j][k]==0)g[i][j][k]=-1;
            }
        }
    }while(!q.empty()){
        auto x = q.front(); q.pop();
        int i=get<0>(x);
        int j=get<1>(x);
        int k=get<2>(x);
        if(i+1<n&&g[i+1][j][k]<0){
            q.push(make_tuple(i+1,j,k));
            g[i+1][j][k]=g[i][j][k]+1;
        }if(i-1>=0&&g[i-1][j][k]<0){
            q.push(make_tuple(i-1,j,k));
            g[i-1][j][k]=g[i][j][k]+1;
        }if(j+1<m&&g[i][j+1][k]<0){
            q.push(make_tuple(i,j+1,k));
            g[i][j+1][k]=g[i][j][k]+1;
        }if(j-1>=0&&g[i][j-1][k]<0){
            q.push(make_tuple(i,j-1,k));
            g[i][j-1][k]=g[i][j][k]+1;
        }if(k-1>=0&&g[i][j][k-1]<0){
            q.push(make_tuple(i,j,k-1));
            g[i][j][k-1]=g[i][j][k]+1;
        }if(k+1<h&&g[i][j][k+1]<0){
            q.push(make_tuple(i,j,k+1));
            g[i][j][k+1]=g[i][j][k]+1;
        }
    }for(int k=0; k<h; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(g[i][j][k]==-1){
                    cout << -1;
                    return 0;
                }
                mx=max(mx,g[i][j][k]);
            }
        }
    }cout << mx;
}