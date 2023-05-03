#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<21;
int tree[INF*4],n,cnt,a[INF];
int f(int s,int e,int x,int l,int r){
    if(l>e||r<s)return 0;
    if(l<=s&&e<=r)return tree[x];
    int m=(s+e)/2;
    return max(f(s,m,x*2,l,r),f(m+1,e,x*2+1,l,r));
}void update(int s,int e,int x,int i,int n){
    if(i<s||i>e)return;
    if(s==e){
        tree[x]=n;
        return;
    }int m=(s+e)/2;
    update(s,m,x*2,i,n);
    update(m+1,e,x*2+1,i,n);
    tree[x]=max(tree[x*2],tree[x*2+1]);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }for(int i=1; i<=n; i++){
        int t=f(1,INF,1,1,a[i]-1)+1;
        update(1,INF,1,a[i],t);
        cnt=max(t,cnt);
    }cout << cnt;
}