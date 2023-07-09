#include <bits/stdc++.h>
using namespace std;
vector<int> a[2001];
bool seen[2001];
void dfs(int i,int d){
    if(seen[i])return;
    if(d>3){
        cout << 1;
        exit(0);
    }
    seen[i]=1;
    for(int&v:a[i]){
        if(seen[v])continue;
        dfs(v,d+1);
    }seen[i]=0;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n,m;
    cin >> n >> m;
    while(m--){
        int x,y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }for(int i=0; i<n; i++){
        dfs(i,0);
        fill(seen,seen+n,0);
    }cout << 0;
}