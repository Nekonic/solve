#include <bits/stdc++.h>
using namespace std;
bool seen[501][501]={};
int g[501][501]={};
int sum=0;
int n,m,x,mxs=0,cnt=0;
void dfs(int i,int j){
    if(i<0||i>501||j<0||j>501)return;
    if(seen[i][j]||g[i][j]==0)return;
    seen[i][j]=true;
    sum++;
    dfs(i+1,j);
    dfs(i-1,j);
    dfs(i,j+1);
    dfs(i,j-1);
    return;
}
int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> x;
            g[i][j]=x;
        }
    }for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum=0;
            dfs(i,j);
            if(sum!=0)cnt++;
            mxs=max(sum,mxs);
        }
    }cout << cnt << '\n' << mxs;
}