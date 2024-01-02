#include <bits/stdc++.h>
using namespace std;
const long long INF=1LL<<60;
int n,m,k,idx;
vector<long long> city(100002,INF);
vector<pair<long long,int>> g[100002];
priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> q;
void f(){
    while(!q.empty()){
        long long a,b,w,nw;
        tie(w,a)=q.top();q.pop();
        if(city[a]!=w)continue;
        for(auto v:g[a]){
            tie(nw,b)=v;
            nw+=w;
            if(city[b]<=nw)continue;
            city[b]=nw;
            q.push({nw,b});
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> m >> k;
    while(m--){
        long long a,b,w;
        cin >> a >> b >> w;
        g[b].push_back({w,a});
    }while(k--){
        int x;
        cin >> x;
        city[x]=0;
        q.push({0,x});
    }f();
    long long ans=0;
    for(int i=1; i<=n; i++){
        if(ans<city[i]&&city[i]!=INF){
            ans=city[i];
            idx=i;
        }
    }
    cout << idx << '\n' << ans;
}