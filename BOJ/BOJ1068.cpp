#include <bits/stdc++.h>
using namespace std;
int rt,cnt;
vector<vector<int>> g(51);
vector<int> par(51,-1);
void f(int a){
    for(auto&i:g[a]){
        //cout << i << '\n';
        f(i);
    }if(!g[a].size())cnt++;
}
int main(){
    int n,x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x!=-1){
            g[x].push_back(i);
            par[i]=x;
        }else rt=i;
    }cin >> x;
    if(x==rt){
        cout << 0;
        return 0;
    }if(g[par[x]].size()!=1)cnt--;
    g[x].clear();
    f(rt);
    cout << cnt;
}