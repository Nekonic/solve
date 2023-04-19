#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,a[100001]={},s=0,e=1,cnt=0;
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        a[i]+=a[i-1];
    }while(e<=n){
        if(a[e]-a[s]>=k){
            if(a[e]-a[s]==k)cnt++;
            s++;
        }else e++;
    }cout << cnt;
}