#include <bits/stdc++.h>
using namespace std;
int x,a[1000001]={};
bool seen[1000001]={};
queue<int> q;
void bfs(int i){
    if(seen[i]||i==0)return;
    seen[i]=true;
    if(i==1){
        q = queue<int>();
        return;
    }if(i%3==0){
        if(a[i/3]==0)a[i/3]=a[i]+1;
        else a[i/3]=min(a[i/3],a[i]+1);
        q.push(i/3);
    }if(i%2==0){
        if(a[i/2]==0)a[i/2]=a[i]+1;
        else a[i/2]=min(a[i/2],a[i]+1);
        q.push(i/2);
    }if(i-1>0){
        if(a[i-1]==0)a[i-1]=a[i]+1;
        else a[i-1]=min(a[i-1],a[i]+1);
        q.push(i-1);
    }
}
int main(){
    cin >> x;
    q.push(x);
    while(!q.empty()){
        int i=q.front();
        q.pop();
        bfs(i);
    }
    cout << a[1];
}