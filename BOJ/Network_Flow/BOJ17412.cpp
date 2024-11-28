//from 알고리즘 문제 해결 전략
#include<bits/stdc++.h>
using namespace std;

const int INF = 12490940;
int n,p;
int cap[401][401],flow[401][401];

int networkFlow(int source, int sink){
    memset(flow,0,sizeof(flow));
    int totalFlow = 0;
    while(1){
        //bfs 증가경로 탐색
        vector<int> par(401,-1);
        queue<int> q;
        par[source]=source;
        q.push(source);
        while(!q.empty()){
            int here = q.front(); q.pop();
            for(int there=1; there<=n; there++){
                if(cap[here][there]-flow[here][there]>0&&par[there]==-1){
                    q.push(there);
                    par[there]=here;
                }
            }
        }
        if(par[sink]==-1)break;
        // 유량 결정
        int amount=INF;
        for(int p=sink;p!=source;p=par[p]){
            amount=min(cap[par[p]][p]-flow[par[p]][p],amount);
        }
        // 유량 보내기
        for(int p=sink;p!=source;p=par[p]){
            flow[par[p]][p]+=amount;
            flow[p][par[p]]-=amount;
        }
        totalFlow+=amount;
    }return totalFlow;
}
int main(){
    memset(cap, 0, sizeof(cap));
    cin >> n >> p;
    while(p--){
        int a,b;
        cin >> a >> b;
        cap[a][b]=1;
    }cout << networkFlow(1,2) << '\n';
}