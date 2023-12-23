#include <bits/stdc++.h>
using namespace std;
int n,c,a[200001],ans;
bool ps(int m){
    int cnt=1,s=a[0];
    for(int i=1; i<n; i++){
        if(a[i]-s>=m){
            cnt++;
            s=a[i];
        }
    }if(cnt>=c){
        ans=max(m,ans);
        return 1;
    }else return 0;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> c;
    for(int i=0; i<n; i++)cin >> a[i];
    sort(a,a+n);
    int s=0,e=a[n-1]-a[0];
    while(s<=e){
        int mid=(s+e)/2;
        if(ps(mid))s=mid+1;
        else e=mid-1;
    }cout << ans;
}