#include <bits/stdc++.h>
using namespace std;
vector<bool> seen(1000001,0);
vector<int> G[2][1000001];
int dfs(int x,int r){
    int cnt=1;
    seen[x]=1;
    for(int i:G[r][x]){
        if(seen[i])continue;
        cnt+=dfs(i,r);
    }return cnt;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n,m,x;
    cin >> n >> m >> x;
    while(m--){
        int a,b;
        cin >> a >> b;
        G[0][b].push_back(a);
        G[1][a].push_back(b);
    }int res1=dfs(x,0),res2;
    fill(seen.begin(),seen.end(),0);
    res2=n+1-dfs(x,1);
    cout << res1 << ' ' << res2;
}