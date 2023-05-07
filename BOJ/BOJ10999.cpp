#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<21;
long long n,m,k,a[INF],tree[INF*4],lazy[INF*4];
long long init(int s,int e,int x){
    if(s==e)return tree[x]=a[s];
    int m=(s+e)/2;
    return tree[x]=init(s,m,x*2)+init(m+1,e,x*2+1);
}void update_lazy(int s,int e,int x){
    if(lazy[x]!=0){
        tree[x]+=(e-s+1)*lazy[x];
        if(s!=e){
            lazy[x*2]+=lazy[x];
            lazy[x*2+1]+=lazy[x];
        }lazy[x]=0;
    }
}void update(int s,int e,int x,int l,int r,long long n){
    update_lazy(s,e,x);
    if(l>e||r<s)return;
    if(l<=s&&e<=r){
        tree[x]+=(e-s+1)*n;
        if(s!=e){
            lazy[x*2]+=n;
            lazy[x*2+1]+=n;
        }
        return;
    }
    int m=(s+e)/2;
    update(s,m,x*2,l,r,n);
    update(m+1,e,x*2+1,l,r,n);
    tree[x]=tree[x*2]+tree[x*2+1];
}long long query(int s,int e,int x,int l,int r){
    update_lazy(s,e,x);
    if(l>e||r<s)return 0;
    if(l<=s&&e<=r)return tree[x];
    int m=(s+e)/2;
    return query(s,m,x*2,l,r)+query(m+1,e,x*2+1,l,r);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> m >> k;k+=m;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }init(0,n-1,1);
    while(k--){
        long long x1,x2,x3,x4;
        cin >> x1 >> x2 >> x3;
        x2--;x3--;
        if(x1==1){
            cin >> x4;
            update(0,n-1,1,x2,x3,x4);
        }else cout << query(0,n-1,1,x2,x3) << '\n';
    }
}