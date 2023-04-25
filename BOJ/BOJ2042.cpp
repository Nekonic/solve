#include <bits/stdc++.h>
using namespace std;
long long n,m,k,a[1000001],tree[4000004];
long long init(int s,int e,int x){
    if(s==e)return tree[x]=a[s];
    int m=(s+e)/2;
    return tree[x]=init(s,m,x*2)+init(m+1,e,x*2+1);
}
long long sum(int s,int e,int x,int l,int r){
    if(l>e||r<s)return 0;
    if(l<=s&&e<=r)return tree[x];
    int m=(s+e)/2;
    return sum(s,m,x*2,l,r)+sum(m+1,e,x*2+1,l,r);
}
void update(int s,int e,int x,int i,long long n){
    if(i<s||i>e)return;
    tree[x]+=n;
    if(s==e)return;
    int m=(s+e)/2;
    update(s,m,x*2,i,n);
    update(m+1,e,x*2+1,i,n);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> m >> k;m+=k;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }init(0,n-1,1);
    while(m--){
        long long x,y,z;
        cin >> x >> y >> z;
        y--;
        if(x==1){
            long long d = z-a[y];
            a[y] = z;
            update(0,n-1,1,y,d);
        }else cout << sum(0,n-1,1,y,z-1) << '\n';
    }
}