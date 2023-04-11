#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int a[100001]={},t,n,k;
bool seen[100001]={};
void bfs(int i){
    if(seen[i])return;
    seen[i]=true;
    if(i==k){
        t=a[i];
        q = queue<int>();
        return;
    }
    if(i>0){
        if(a[i-1]==0)a[i-1]=a[i]+1;
        else a[i-1]=min(a[i]+1,a[i-1]);
        q.push(i-1);
    }
    if(i<=100000){
        if(a[i+1]==0)a[i+1]=a[i]+1;
        else a[i+1]=min(a[i]+1,a[i+1]);
        q.push(i+1);
    }
    if(i*2<=100000){
        if(a[i*2]==0)a[i*2]=a[i]+1;
        else a[i*2]=min(a[i]+1,a[i*2]);
        q.push(i*2);
    }
}
int main(){
    cin >> n >> k;
    q.push(n);
    while(!q.empty()){
        int i=q.front();
        q.pop();
        bfs(i);
    }cout << t;
}