#include <bits/stdc++.h>
using namespace std;
int n,a[10001],d[10001];
int ans(){
    d[0]=a[0];
    d[1]=a[1]+d[0];
    for(int i=0; i<n; i++){
        d[i]=max(d[i-3]+a[i-1]+a[i],d[i-2]+a[i]);
        d[i]=max(d[i-1],d[i]);
    }return d[n-1];
}
int main(){
    cin >> n;
    for(int i=0; i<n; i++)cin >> a[i];
    cout << ans();
}