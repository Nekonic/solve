#include <iostream>
#include <queue>
using namespace std;
int n,m,a[11][11]={};
bool visit[11][11]={};
queue<pair<int,int>> bfsq;
void bfs(int i,int j){
    if(visit[i][j])return;
    while(!bfsq.empty()){
    }
    i=bfsq.front().first;
    j=bfsq.front().second;
}
int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
}