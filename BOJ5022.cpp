#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<30;
int n,m,mn,mx,A,ans1=INF,ans2=INF;
int a[102][102],a1[2],a2[2],b1[2],b2[2];
bool check[102][102],f;
vector<pair<int,int>> dir={{-1,0},{0,-1},{1,0},{0,1}};
queue<pair<int,int>> q;
void dfs(int i,int j){
    if(a[i][j]==0){
        check[i][j]=1;
        f=1;
    }
    if(f)return;
    for(auto xy:dir){
        int x,y;
        tie(x,y)=xy;
        if(i+x<0||j+y<0||i+x>n||j+y>m||a[i+x][j+y]+1!=a[i][j])continue;
        dfs(i+x,j+y);
    }check[i][j]=1;
}
void bfs(bool flag){
    fill(&a[0][0],&a[101][101],INF);
    fill(&check[0][0],&check[101][101],0);

    if(flag){
        swap_ranges(a1,a1+2,b1);
        swap_ranges(a2,a2+2,b2);
    }
    a[a1[0]][a1[1]] = 0;
    q.push({a1[0],a1[1]});
    check[b1[0]][b1[1]]=1;
    check[b2[0]][b2[1]]=1;
    while(!q.empty()){
        int i,j;
        tie(i,j)=q.front();q.pop();
        if(i==a2[0]&&j==a2[1]){
            q = queue<pair<int,int>>();
            fill(&check[0][0],&check[101][101],0);
            dfs(a2[0],a2[1]);f=0;
            break;
        }
        if(check[i][j])continue;
        check[i][j]=1;
        for(auto xy:dir){
            int x,y;
            tie(x,y)=xy;
            if(i+x<0||j+y<0||i+x>n||j+y>m||check[i+x][j+y])continue;
            a[i+x][j+y]=min(a[i][j]+1,a[i+x][j+y]);
            q.push({i+x,j+y});
        }
    }A=a[a2[0]][a2[1]];

    fill(&a[0][0],&a[101][101],INF);

    a[b1[0]][b1[1]] = 0;

    q.push({b1[0],b1[1]});
    while(!q.empty()){
        int i,j;
        tie(i,j)=q.front();q.pop();
        if(i==b2[0]&&j==b2[1]){
            q = queue<pair<int,int>>();
            break;
        }
        if(check[i][j])continue;
        check[i][j]=1;
        for(auto xy:dir){
            int x,y;
            tie(x,y)=xy;
            if(i+x<0||j+y<0||i+x>n||j+y>m||check[i+x][j+y])continue;
            a[i+x][j+y]=min(a[i][j]+1,a[i+x][j+y]);
            q.push({i+x,j+y});
        }
    }if(a[b2[0]][b2[1]]!=INF){
        if(flag)ans2=a[b2[0]][b2[1]]+A;
        else ans1=a[b2[0]][b2[1]]+A;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    fill(&a[0][0],&a[101][101],INF);
    
    cin >> n >> m;
    cin >> a1[0] >> a1[1] >> a2[0] >> a2[1] >> b1[0] >> b1[1] >> b2[0] >> b2[1];
    bfs(0);
    bfs(1);
    if(ans1==INF&&ans2==INF)cout << "IMPOSSIBLE";
    else cout << min(ans1,ans2);
}