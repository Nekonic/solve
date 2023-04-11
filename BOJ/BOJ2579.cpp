#include <bits/stdc++.h>
using namespace std;
int n,d[301][3],a[301];
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }d[0][0]=a[0];
    d[1][0]=a[1];
    d[1][1]=a[1]+a[0];
    for(int i=2; i<n; i++){
        d[i][0]=max(d[i-2][0],d[i-2][1])+a[i];
        d[i][1]=d[i-1][0]+a[i];
    }cout << max(d[n-1][0],d[n-1][1]);
}