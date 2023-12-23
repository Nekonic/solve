#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<30;
vector<vector<pair<int,int>>> G;
void Dijkstra(int st,vector<int>&ans){
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    ans[st]=0;
    q.push({0,st});
    while(!q.empty()){
        int cost,node;
        tie(cost,node)=q.top(),q.pop();
        if(ans[node]!=cost)continue;
        for(auto next:G[node]){
            int nc,nn;
            tie(nc,nn)=next;
            if(ans[nn]<=ans[node]+nc)continue;
            ans[nn]=nc+ans[node];
            q.push({ans[nn],nn});
        }
    }
}
void f(){
    int n,m,t,s,g,h,x;
    vector<int> vt;
    G=vector<vector<pair<int,int>>>(2001);
    cin >> n >> m >> t;
    cin >> s >> g >> h;
    while(m--){
        int a,b,d;
        cin >> a >> b >> d;
        G[a].push_back({d,b});
        G[b].push_back({d,a});
    }while(t--){
        cin >> x;
        vt.push_back(x);
    }sort(vt.begin(),vt.end());
    vector<int> ans1(2001,INF),ans2(2001,INF),ans3(2001,INF);
    Dijkstra(s,ans1);
    Dijkstra(g,ans2);
    Dijkstra(h,ans3);
    int d=ans2[h];
    for(int v:vt){
        if(ans1[v]==ans1[g]+d+ans3[v])cout<<v<<' ';
        else if(ans1[v]==ans1[h]+d+ans2[v])cout<<v<<' ';
    }cout << '\n';
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int tc;
    cin >> tc;
    while(tc--)f();
}