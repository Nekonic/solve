#include <bits/stdc++.h>
using namespace std;
const int INF=1<<30;
int n,m,ans[102][102];
bool arr[102][102];
priority_queue<tuple<int, int, int>,
vector<tuple<int, int, int>>,
greater<tuple<int, int, int>>> q;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    fill(&ans[1][1],&ans[101][101],INF);
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            char c;
            cin >> c;
            arr[i][j]=c-'0';
        }
    }ans[1][1]=0;
    q.push({0,1,1});
    while(!q.empty()){
        int w,i,j;
        tie(w,i,j)=q.top();q.pop();
        if(ans[i][j]!=w)continue;
        for(int dir=0; dir<4; dir++){
            int x=i+dx[dir];
            int y=j+dy[dir];
            if(x>m||x<1)continue;
            if(y>n||y<1)continue;
            int nw=w+arr[x][y];
            if(nw<ans[x][y]){
                ans[x][y]=nw;
                q.push({nw,x,y});
            }
        }
    }cout << ans[m][n];
}