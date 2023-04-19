#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a[100001]={},d[100001]={},mx=-1000,s=0,e=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        d[i]=a[i];
    }for(int i=1; i<=n; i++){
        d[i]=max(d[i],d[i-1]+a[i]);
    }
    cout << *max_element(d+1, d+n+1);
}