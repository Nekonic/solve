#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<29;
int n,m,x,y,g[101];
vector<int> cost(101,INF);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    queue<int> q;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        g[x]=y;
    }for(int i=0; i<m; i++){
        cin >> x >> y;
        g[x]=y;
    }cost[1]=0;
    q.push(1);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(int i=1; i<7; i++){
            int next=x+i;
            if(next>100)continue;
            if(g[next])next=g[next];
            if(cost[x]+1<cost[next]){
                cost[next]=cost[x]+1;
                q.push(next);
            }
        }
    }cout << cost[100];
}