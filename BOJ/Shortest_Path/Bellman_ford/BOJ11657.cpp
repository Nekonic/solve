#include <bits/stdc++.h>
using namespace std;
const long long INF=1LL<<60;
vector<tuple<int,int,int>> g;
vector<long long> ans(501,INF);
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    long long n,m;
    cin >> n >> m;
    while(m--){
        long long a,b,w;
        cin >> a >> b >> w;
        g.push_back({a,b,w});
    }ans[1]=0;
    for(int i=1; i<=n; i++){
        for(int j=0; j<g.size(); j++){
            long long a,b,w;
            tie(a,b,w)=g[j];
            if(ans[a]!=INF&&ans[a]+w<ans[b]){
                ans[b]=ans[a]+w;
            }
        }
    }for(int i=0; i<g.size(); i++){
        long long a,b,w;
        tie(a,b,w)=g[i];
        if(ans[a]!=INF&&ans[a]+w<ans[b]){
            cout << "-1";
            return 0;
        }
    }
    for(int i=2; i<=n; i++){
        if(ans[i]==INF)cout << "-1\n";
        else cout << ans[i] << '\n';
    }
}