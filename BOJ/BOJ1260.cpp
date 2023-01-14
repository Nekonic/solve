#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;
int n,m,v,x,y;
unsigned short a[1001][1001]={};
unordered_map<short,bool> visit;
queue<short> bfsq;
void dfs(int f){
    if(visit.find(f)!=visit.end())return;
    cout << f << ' ';
    visit.insert({f,true});
    for(int i=1; i<=1000; i++){
        if(a[f][i]!=0){
            dfs(i);
        }
    }return;
}
void bfs(int f){
    if(visit.find(f)!=visit.end())return;
    cout << f << ' ';
    visit.insert({f,true});
    for(int i=1; i<=1000; i++){
        if(a[f][i]!=0){
            bfsq.push(i);
        }
    }while (!bfsq.empty()){
        f=bfsq.front();
        bfsq.pop();
        bfs(f);
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m >> v;
    for(int i=0; i<m; i++){
        cin >> x >> y;
        a[x][y]++;
        a[y][x]++;
    }
    dfs(v);
    cout << '\n';
    visit.clear();
    bfs(v);
}
