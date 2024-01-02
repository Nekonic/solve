#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<21;
int n,a,tree[INF];
long long cnt;
vector<pair<int,int>> p;
int init(int s,int e,int x){
    if(s==e)return tree[x]=1;
    int m=(s+e)/2;
    return tree[x]=init(s,m,x*2)+init(m+1,e,x*2+1);
}
int query(int s,int e,int x,int l,int r){
    if(l>e||r<s)return 0;
    if(l<=s&&e<=r)return tree[x];
    int m=(s+e)/2;
    return query(s,m,x*2,l,r)+query(m+1,e,x*2+1,l,r);
}
void update(int s,int e,int x,int i,int n){
    if(i<s||i>e)return;
    if(s==e){
        if(s==i)tree[x]=n;
        return;
    }
    int m=(s+e)/2;
    update(s,m,x*2,i,n);
    update(m+1,e,x*2+1,i,n);
    tree[x]=tree[x*2]+tree[x*2+1];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        p.push_back({a,i});
    }sort(p.begin(), p.end());
    init(0,n-1,1);
    for(int i=0; i<n; i++){
        cnt+=query(0,n-1,1,0,p[i].second)-1;
        update(0,n-1,1,p[i].second,0);
    }cout << cnt;
}