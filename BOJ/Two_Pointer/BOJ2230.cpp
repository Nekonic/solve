#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a[100001],s=0,e=0,mx=1<<30;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }sort(a,a+n);
    while(e<n){
        if(a[e]-a[s]>=m){
            mx=min(mx,a[e]-a[s]);
            s++;
        }
        else e++;
        if(s==e)e++;
    }cout << mx;
}