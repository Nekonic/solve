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
        a[i*2]=min(a[i]+1,a[i*2]);
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
}void path(int l,int x){
    if(l!=0){
        if(x%2==0&&a[x/2]==l-1){
            path(l-1,x/2);
        }else if(x>0&&a[x-1]==l-1){
            path(l-1,x-1);
        }else if(x<=100000&&a[x+1]==l-1){
            path(l-1,x+1);
        }
    }cout << x << ' ';
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> k;
    q.push(n);a[n]=0;
    while(!q.empty()){
        int i=q.front();
        q.pop();
        bfs(i);
    }cout << a[k] << '\n';
    path(a[k],k);
}