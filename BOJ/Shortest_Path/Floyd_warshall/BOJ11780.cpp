#include <bits/stdc++.h>
using namespace std;
const int INF=1<<29;
int n,m,ans[101][101],path[101][101];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> m;
    fill(&ans[0][0],&ans[n][n],INF);
    while(m--){
        int u,v,w;
        cin >> u >> v >> w;
        if(ans[u][v]<w)continue;
        ans[u][v]=w;
        path[u][v]=v;
    }for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(ans[i][j]<=ans[i][k]+ans[k][j])continue;
                ans[i][j]=ans[i][k]+ans[k][j];
                path[i][j]=path[i][k];
            }
        }
    }for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(ans[i][j]==INF||i==j)cout << "0 ";
            else cout << ans[i][j] << ' ';
        }cout << '\n';
    }for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(ans[i][j]==INF||i==j){
                cout << "0\n";
                continue;
            }vector<int> a;
            int st=i;
            while(st!=j){
                a.push_back(st);
                st=path[st][j];
            }a.push_back(j);
            cout << a.size() <<' ';
            for(auto x:a)cout << x << ' ';
            cout << '\n';
        }
    }
}