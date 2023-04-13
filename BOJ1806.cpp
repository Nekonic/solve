#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a[100001],x,s=0,e=1,mx=1LL<<60;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> x;
        a[i]=a[i-1]+x;
    }
    while(e<=n){
        if(a[e]-a[s]>=m){
            mx=min(mx,e-s);
            s++;
        }else e++;
        if(s==e)e++;
    }if(mx==1LL<<60)cout << 0;
    else cout << mx;
}