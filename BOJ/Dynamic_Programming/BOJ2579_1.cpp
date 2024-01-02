#include <bits/stdc++.h>
using namespace std;
int n,d[301],a[301],sum;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum+=a[i];
    }d[0]=a[0];
    d[1]=a[1];
    d[2]=a[2];
    for(int i=3; i<n; i++){
        d[i]=min(d[i-1],d[i-2])+a[i];
    }cout << sum-min(d[n-1],d[n-2]);
}