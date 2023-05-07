#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<21, mod = 1000000007;
long long tree[INF*4],arr[INF],lazy[INF*4],n,m,k;
long long init(int s,int e,int x){
    if(s==e)tree[x]=a[x];
    int mid=(s+e)/2;
    tree[x]=((init(s,m,x*2)%mod)*(init(m+1,e,x*2+1)%mod))%mod;
}void lazy_update(int s,int e,int x){
    if(lazy[x]!=0){
        tree[x]*=lazy[x]%mod;
        if(s!=e){
            lazy[x*2]*=lazy[x]%mod;
            lazy[x*2+1]*=lazy[x]%mod;
        }lazy[x]=0;
    }
}void update(int s,int e,int x,int i,int n){
    update_lazy(s,e,x);
    if(l>e||r<s)return;
    if(l<=s&&e<=r){
        tree[x]*=n;
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
    cin >> n >> m >> k;k+=m;
    for(int i=0; i<n; i++)cin >> a[i];
    init(0,n-1,1);
    while(k--){
        long long a,b,c;
        cin >> a >> b >> c;
        if(a==1)
    }
}