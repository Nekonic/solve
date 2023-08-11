#include <bits/stdc++.h>
using namespace std;
queue<pair<int,int>> q,tq;
vector<pair<int,int>> dxy={{1,0},{-1,0},{0,1},{0,-1}};
vector<int> par(100001,-1);
int n,m,cnt,civil_count;
int civil[2001][2001];
int root(int x){
    if(par[x]==-1)return x;
    return par[x]=root(par[x]);
}
void union_civil(int a,int b){
    a=root(a);
    b=root(b);
    if(a<b)par[b]=a;
    else par[a]=b;
}
bool merge(){
    int qsize=q.size();
    tq=q;
    for(int i=0; i<qsize; i++){
        int x,y;
        tie(x,y)=tq.front();tq.pop();
        for(int d=0; d<4; d++){
            int dx,dy;
            tie(dx,dy)=dxy[d];
            dx+=x;dy+=y;
            if(dx<=0||dx>n||dy<=0||dy>n)continue;
            if(civil[dx][dy]==0)continue;
            int a=root(civil[dx][dy]),b=root(civil[x][y]);
            if(a!=b){
                union_civil(a,b);
                civil_count--;
            }
        }
    }if(civil_count==1)return true;
    return false;
}
void bfs(){
    int qsize=q.size();
    for(int i=0; i<qsize; i++){
        int x,y;
        tie(x,y)=q.front(),q.pop();
        for(int d=0; d<4; d++){
            int dx,dy;
            tie(dx,dy)=dxy[d];
            dx+=x;dy+=y;
            if(dx<=0||dx>n||dy<=0||dy>n)continue;
            if(civil[dx][dy]!=0)continue;
            civil[dx][dy]=root(civil[x][y]);
            q.push({dx,dy});
        }
    }
}
int main(){
    cin >> n >> m;
    civil_count=m;
    for(int i=1; i<=m; i++){
        int a,b;
        cin >> a >> b;
        civil[a][b]=i;
        q.push({a,b});
    }
    if(merge()){
        cout << 0;
        return 0;
    }
    while(!q.empty()){
        bfs();
        cnt++;
        if(merge())break;
    }cout << cnt;
}