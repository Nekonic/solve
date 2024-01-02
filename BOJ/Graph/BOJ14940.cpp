#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<30;
int n,m,a[1001][1001];
bool seen[1001][1001];
queue<pair<int,int>> q;
pair<int,int> dir[]={{1,0},{-1,0},{0,1},{0,-1}};
int main(){
    fill(&a[0][0],&a[1000][1000],INF);
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int check;
            cin >> check;
            if(!check)a[i][j]=-1;
            else if(check==2){
                a[i][j]=0;
                seen[i][j]=1;
                q.push({i,j});
            }
        }
    }while(!q.empty()){
        int i,j;
        tie(i,j)=q.front(),q.pop();
        for(auto xy:dir){
            int x=i+xy.first,y=j+xy.second;
            if(x<0||y<0||x>=n||y>=m||seen[x][y]||a[x][y]==-1)continue;
            seen[x][y]=1;
            a[x][y]=min(a[x][y],a[i][j]+1);
            q.push({x,y});
        }
    }for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]==INF)cout << "-1 ";
            else if(a[i][j]!=-1)cout << a[i][j] << ' ';
            else cout << "0 ";
        }cout << '\n';
    }
}