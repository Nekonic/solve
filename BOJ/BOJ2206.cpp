#include <bits/stdc++.h>
using namespace std;
int n,m,a[1001][1001];
int d[1001][1001][2];
pair<int,int> dir[]={{-1,0},{0,-1},{1,0},{0,1}};
queue<tuple<int,int,int>> q;
int main(){
    fill(&d[0][0][0],&d[1000][1000][1],-1);
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char c;
            cin >> c;
            a[i][j]=c-'0';
        }
    }q.push({0,0,0});
    d[0][0][0]=d[0][0][1]=1;
    while(!q.empty()){
        int i,j,b;
        tie(i,j,b)=q.front(),q.pop();
        if(i==n-1&&j==m-1){
            cout << d[i][j][b];
            return 0;
        }int next=d[i][j][b]+1;
        for(auto xy:dir){
            int x,y;
            tie(x,y)=xy;
            x+=i,y+=j;
            if(x<0||x>=n||y<0||y>=m)continue;
            if(!a[x][y]&&d[x][y][b]==-1){
                d[x][y][b]=next;
                q.push({x,y,b});
            }if(!b&&a[x][y]&&d[x][y][1]==-1){
                d[x][y][1]=next;
                q.push({x,y,1});
            }
        }
    }cout << -1;
}