#include <bits/stdc++.h>
using namespace std;
queue<int> q;
const int INF = 1<<29;
int t,n,k;
vector<int> a(100001,INF);
bool seen[100010]={};
void bfs(int i){
    if(seen[i])return;
    seen[i]=true;
    if(i==k){
        q = queue<int>();
        return;
    }if(i*2<=100000){
        a[i*2]=min(a[i],a[i*2]);
        q.push(i*2);
    }
    if(i>0){
        a[i-1]=min(a[i]+1,a[i-1]);
        q.push(i-1);
    }
    if(i<=100000){
        a[i+1]=min(a[i]+1,a[i+1]);
        q.push(i+1);
    }
}
int main(){
    cin >> n >> k;
    q.push(n);a[n]=0;
    while(!q.empty()){
        int i=q.front();
        q.pop();
        bfs(i);
    }cout << a[k];
}