#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a[10001],s=0,e=0,cnt=0;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        a[i]+=a[i-1];
    }while(e<=n){
        if(a[e]-a[s]<=m){
            if(a[e]-a[s]==m)cnt++;
            e++;
        }else s++;
    }cout << cnt;
}