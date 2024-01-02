#include <bits/stdc++.h>
using namespace std;
const long long INF=1LL<<60;
long long n,m,s,e,c,h,l=1;
vector<pair<long long,int>> g[100001];
vector<long long> ans(100001,INF);
priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> q;
bool f(long long lim){
    fill(&ans[1],&ans[100001],INF);
    ans[s]=0;
    q.push({0,s});
    while(!q.empty()){
        long long a,b,w,nw;
        tie(w,a)=q.top();q.pop();
        if(ans[a]!=w)continue;
        for(auto v:g[a]){
            tie(nw,b)=v;
            if(nw>lim)continue;
            nw+=w;
            if(nw>=ans[b])continue;
            ans[b]=nw;
            q.push({nw,b});
        }
    }if(ans[e]>c)return 0;
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> m >> s >> e >> c;
    while(m--){
        long long a,b,w;
        cin >> a >> b >> w;
        g[a].push_back({w,b});
        g[b].push_back({w,a});
        h=max(w,h);
    }while(l<h){
        m=(l+h)/2;
        if(f(m))h=m;
        else l=m+1;
    }if(f(l))cout << l;
    else cout << -1;
}