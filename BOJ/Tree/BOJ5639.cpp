#include <bits/stdc++.h>
using namespace std;

//노드의 왼쪽 서브트리에 있는 모든 노드의 키는 노드의 키보다 작다.
//노드의 오른쪽 서브트리에 있는 모든 노드의 키는 노드의 키보다 크다.
//왼쪽, 오른쪽 서브트리도 이진 검색 트리이다.

int node[101], i=0;
int par[101]={},m=1<<29;
vector<int> g[101];
stack<int> s;

int root(int x){
    if(par[x]==0)return x;
    else return root(par[x]);
}

void solve2(int x){
    if(g[x].empty()){
        cout << x << '\n';
        return;
    }for(int t:g[x]){
        solve2(t);
    }cout << x << '\n';
}

void solve(int x){
    if(par[x]==0){
        solve2(g[x][1]);
        cout << x << '\n';
        return;
    }
    cout << " test "<< x << '\n';
    for(int t:g[par[x]]){
        cout << t << '\n';
    }
    cout << x << ' ' << par[x] << '\n';
    solve(par[x]);
}

int main(){
    cin >> node[i];
    s.push(node[i++]);
    while(!cin.eof()){
        cin >> node[i];
        m=min(node[i],m);
        if(s.top()<node[i]){
            s.pop();
            par[node[i]]=s.top();
        }else {
            par[node[i]]=s.top();
            s.push(node[i]);
        }
        g[par[node[i]]].push_back(node[i]);
        i++;
    }
    cout << par[24] << '\n';
    for(int t:g[24])cout << t << '\n';
    cout << '\n';
    solve(m);
}