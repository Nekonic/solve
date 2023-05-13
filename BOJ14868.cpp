#include <bits/stdc++.h>
using namespace std;
const int INF=1<<30;
int n,k,m[2001][2001],x,y,ans,par;
pair<int,int> dxy[]={{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0}};
queue<pair<int,int>> q,t;
void root(int i)
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> k;
    fill(&m[1][1],&m[n][n],INF);
    while(k--){
        cin >> x >> y;
        m[x][y]=0;
        q.push({0,x,y});
    }while(!q.empty()){
        int qs=q.size();
        for(int i=0; i<qs; i++){
            int x,y;
            tie(x,y)=q.front();q.pop();
            t.push({x,y});
        }
    }cout << ans;
}