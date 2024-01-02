#include <bits/stdc++.h>
using namespace std;
int n,m,maze[1009][1009]={};
int f[1009][1009]={};
bool seen[1009][1009]={};
void bfs(int i, int j, queue<pair<int,int>>&q,bool isf){
    if(i>=n||j>=m||i<0||j<0||maze[i][j]==-1||seen[i][j])return;
    seen[i][j]=true;
    int x=0;
    if(isf){
        if(i!=0&&f[i-1][j]==0)f[i-1][j]=f[i][j]+1;
        if(i!=n-1&&f[i+1][j]==0)f[i+1][j]=f[i][j]+1;
        if(j!=0&&f[i][j-1]==0)f[i][j-1]=f[i][j]+1;
        if(j!=m-1&&f[i][j+1]==0)f[i][j+1]=f[i][j]+1;
    }else{
        if(f[i][j]<=maze[i][j])return;
        if(i!=n-1&&maze[i+1][j]==0)maze[i+1][j]=maze[i][j]+1;
        if(i!=0&&maze[i-1][j]==0)maze[i-1][j]=maze[i][j]+1;
        if(j!=m-1&&maze[i][j+1]==0)maze[i][j+1]=maze[i][j]+1;
        if(j!=0&&maze[i][j-1]==0)maze[i][j-1]=maze[i][j]+1;
    }
    q.push(make_pair(i+1,j));
    q.push(make_pair(i,j+1));
    q.push(make_pair(i-1,j));
    q.push(make_pair(i,j-1));
}
int main(){
    cin >> n >> m;
    queue<pair<int,int>> q,fq;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char c;
            cin >> c;
            if(c=='#')maze[i][j]=-1;
            if(c=='J'){
                q.push({i,j});
                maze[i][j]=1;
            }
            if(c=='F'){
                fq.push({i,j});
                f[i][j]=1;
            }
            if(c=='.'){
                maze[i][j]=0;
                f[i][j]=0;
            }
        }
    }if(fq.empty())memset(f, 999999, sizeof(f));
    while (!fq.empty()){
        pair<short,short> t;
        t = fq.front();
        fq.pop();
        bfs(t.first,t.second,fq,true);
    }memset(seen, false, sizeof(seen));
    while (!q.empty()){
        pair<short,short> t;
        t = q.front();
        q.pop();
        bfs(t.first,t.second,q,false);
    }
    int mns=99999999;
    for(int i=0; i<n; i++){
        if(f[i][0]>maze[i][0]&&maze[i][0]>0)mns=min(mns,maze[i][0]);
        if(f[i][m-1]>maze[i][m-1]&&maze[i][m-1]>0)mns=min(mns,maze[i][m-1]);
    }for(int i=0; i<m; i++){
        if(f[0][i]>maze[0][i]&&maze[0][i]>0)mns=min(mns,maze[0][i]);
        if(f[n-1][i]>maze[n-1][i]&&maze[n-1][i]>0)mns=min(mns,maze[n-1][i]);
    }if(mns!=99999999)cout << mns;
    else cout << "IMPOSSIBLE";
}