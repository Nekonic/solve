#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>
#include <utility>
using namespace std;
int maze[102][102]={},n,m;
queue<pair<short,short>> q;
map<pair<short,short>,bool> visit;
void bfs(int i, int j){
    if(i>n||j>m||i<=0||j<=0||maze[i][j]==0)return;
    if(visit.find(make_pair(i,j))!=visit.end())return;
    else visit.insert(make_pair(make_pair(i,j),true));
    if(i!=1||j!=1){
        maze[i][j]+=max(max(maze[i-1][j],maze[i][j-1]),max(maze[i+1][j],maze[i][j+1]));
    }
    q.push(make_pair(i+1,j));
    q.push(make_pair(i,j+1));
    q.push(make_pair(i-1,j));
    q.push(make_pair(i,j-1));
    while (!q.empty()){
        pair<short,short> t;
        t = q.front();
        q.pop();
        bfs(t.first,t.second);
    }return;
}
int main(){
    cin >> n >> m;
    char c;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> c;
            maze[i][j]=c-'0';
        }
    }bfs(1,1);
    cout << maze[n][m];
}