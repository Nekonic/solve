#include <bits/stdc++.h>
using namespace std;
const int INF=1<<30;
int n,k,m[2010][2010],x,y,ans,par[100010];
pair<int,int> dxy[]={{-1,0},{0,-1},{0,1},{1,0}};
queue<pair<int,int>> q,t;
int root(int x){
    if(par[x]==x)return x;
    return root(par[x]);
}
bool unite(int a,int b){
    a=root(a),b=root(b);
    if(a==b)return false;
    if(a>b)par[a]=b;
    else par[b]=a;
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    for(int i=1; i<100002; i++)par[i]=i;
    cin >> n >> k;
    for(int i=1; i<=k; i++){
        cin >> x >> y;
        m[x][y]=i;
        t.push({x,y});
    }while(k>1){
        while(!t.empty()){
            int x,y;
            tie(x,y)=t.front();t.pop();
            q.push({x,y});
            for(auto d:dxy){
                int dx,dy;
                tie(dx,dy)=d;dx+=x,dy+=y;
                if(dx<1||dy<1||dx>n||dy>n)continue;
                if(m[dx][dy]==0||m[x][y]==m[dx][dy])continue;
                if(unite(m[dx][dy],m[x][y]))k--;
            }
        }if(k==1){
            cout << ans;
            return 0;
        }while(!q.empty()){
            int x,y;
            tie(x,y)=q.front();q.pop();
            for(auto d:dxy){
                int dx,dy;
                tie(dx,dy)=d;dx+=x,dy+=y;
                if(dx<1||dy<1||dx>n||dy>n)continue;
                if(m[dx][dy]==0){
                    m[dx][dy]=m[x][y];
                    t.push({dx,dy});
                }else if(unite(m[dx][dy],m[x][y]))k--;
            }
        }ans++;
    }cout << ans;
}