#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<pair<int,int>>>;
void pre(int v,Graph&G){
    auto i = G[v][0];
    cout << char(v+64);
    if(i.first!=0)pre(i.first,G);
    if(i.second!=0)pre(i.second,G);
}
void ino(int v,Graph&G){
    auto i = G[v][0];
    if(i.first!=0)ino(i.first,G);
    cout << char(v+64);
    if(i.second!=0)ino(i.second,G);
}
void pos(int v,Graph&G){
    auto i = G[v][0];
    if(i.first!=0)pos(i.first,G);
    if(i.second!=0)pos(i.second,G);
    cout << char(v+64);
}
int main(){
    int n;
    char p,a,b;
    cin >> n;
    Graph G(n+1);
    while(n--){
        cin >> p >> a >> b;
        G[p-64].push_back({a!='.'?a-64:0,b!='.'?b-64:0});
    }pre(1,G);
    cout << '\n';
    ino(1,G);
    cout << '\n';
    pos(1,G);
}