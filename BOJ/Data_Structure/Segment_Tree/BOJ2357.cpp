#include <bits/stdc++.h>
using namespace std;
const long long INF=1LL<<60;
long long n,m,arr[100001],maxTree[400004],minTree[400004];
long long maxInit(int s,int e,int x){
    if(s==e)return maxTree[x]=arr[s];
    int mid=(s+e)/2;
    return maxTree[x]=max(maxInit(s,mid,x*2),maxInit(mid+1,e,x*2+1));
}long long minInit(int s,int e,int x){
    if(s==e)return minTree[x]=arr[s];
    int mid=(s+e)/2;
    return minTree[x]=min(minInit(s,mid,x*2),minInit(mid+1,e,x*2+1));
}long long maxQuery(int s,int e,int l,int r,int x){
    if(l>e||r<s)return 0;
    if(l<=s&&e<=r)return maxTree[x];
    int mid=(s+e)/2;
    return max(maxQuery(s,mid,l,r,x*2),maxQuery(mid+1,e,l,r,x*2+1));
}long long minQuery(int s,int e,int l,int r,int x){
    if(l>e||r<s)return INF;
    if(l<=s&&e<=r)return minTree[x];
    int mid=(s+e)/2;
    return min(minQuery(s,mid,l,r,x*2),minQuery(mid+1,e,l,r,x*2+1));
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }maxInit(0,n-1,1);
    minInit(0,n-1,1);
    while(m--){
        int a,b;
        cin >> a >> b;a--;b--;
        cout << minQuery(0,n-1,a,b,1) << ' ' << maxQuery(0,n-1,a,b,1) << '\n';
    }
}