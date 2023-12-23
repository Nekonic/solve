#include <bits/stdc++.h>
using namespace std;
int n,m,a[1000001],ans;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=0; i<n; i++)cin >> a[i];
    int e=0,cnt=a[0]&1;
    for(int s=0; s<n; s++){
        while(e<n-1&&cnt+a[e+1]%2<=m){
            e++;
            cnt+=a[e]%2;
        }ans=max(ans,e-s+1-cnt);
        cnt-=a[s]%2;
    }cout << ans;
}