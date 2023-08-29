#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<30;
int n,m,k,x;
bool flag;
vector<int> v[300001],ans(300001,INF);
priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> q;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin>>n>>m>>k>>x;
    while(m--){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
    }ans[x]=0;
    q.push({ans[x],x});
    while(!q.empty()){
        int w,u;
        tie(w,u)=q.top(),q.pop();
        if(ans[u]!=w)continue;
        for(int next:v[u]){
            int nw=w+1;
            if(ans[next]<nw)continue;
            ans[next]=nw;
            q.push({nw,next});
        }
    }for(int i=1; i<=n; i++){
        if(ans[i]==k){
            cout << i << '\n';
            flag=1;
        }
    }if(!flag)cout << -1;
}