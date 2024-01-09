#include <bits/stdc++.h>
using namespace std;
int n,k,s=1,e,m,cnt,ans;
int main(){
    cin >> n >> k;
    e=k;
    while(s<=e){
        m=(s+e)/2;
        cnt=0;
        for(int i=1; i<=n; i++){
            cnt+=min(n,m/i);
        }if(cnt>=k){
            ans=m;
            e=m-1;
        }else s=m+1;
    }cout << ans;
}