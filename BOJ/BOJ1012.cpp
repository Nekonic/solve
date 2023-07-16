#include <bits/stdc++.h>
using namespace std;
int tc;
int n,m;
int g[52][52];
bool seen[52][52];
queue<pair<int,int>> q;
pair<int,int> d[]={{1,0},{0,1},{-1,0},{0,-1}};
void dfs(int x,int y){
    if(seen[x][y]||!g[x][y])return;
    seen[x][y]=1;
    for(auto xy:d){
        int i,j;
        tie(i,j)=xy;
        i+=x;j+=y;
        if(i<0||i>=n||j<0||j>=m)continue;
        dfs(i,j);
    }
}
int main(){
    cin >> tc;
    while(tc--){
        fill(&seen[0][0],&seen[51][51],0);
        fill(&g[0][0],&g[51][51],0);
        int k,x,y,cnt=0;
        cin >> n >> m >> k;
        while(k--){
            cin >> x >> y;
            g[x][y]=1;
        }for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(g[i][j]&&!seen[i][j]){
                    dfs(i,j);
                    cnt++;
                }
            }
        }cout << cnt << '\n';
    }
}