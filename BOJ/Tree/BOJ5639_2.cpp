#include <bits/stdc++.h>
using namespace std;

//노드의 왼쪽 서브트리에 있는 모든 노드의 키는 노드의 키보다 작다.
//노드의 오른쪽 서브트리에 있는 모든 노드의 키는 노드의 키보다 크다.
//왼쪽, 오른쪽 서브트리도 이진 검색 트리이다.

int node[10001], j=0;
int par[10001]={},m=1<<29;
int seen[10001]={};
vector<int> g[10001];

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
    cin >> node[j++];
    while(!cin.eof()){
        cin >> node[j];
        m=min(node[j],m);
        j++;
    }
    for(int i=0;i<j;i++) {
        if(node[i-1]>node[i]){
            par[node[i]]=node[i-1];
        }else{
            if(par[node[i-1]]!=par[node[i-2]]){
                par[node[i]]=par[node[i-1]];
            }else if(g[par[node[i-1]]].size()==2){
                for(int x=0; x<i; x++){
                    if(!seen[node[x]]){
                        par[node[i]]=par[node[x]];
                    }
                }
            }else par[node[i]]=par[par[node[i-1]]];
        }
        g[par[node[i]]].push_back(node[i]);
        if(g[par[node[i]]].size()==2)seen[par[node[i]]]=1;
    }
    cout << par[24] << '\n';
    for(int t:g[24])cout << t << '\n';
    cout << '\n';
    solve(m);
}