#include <bits/stdc++.h>
using namespace std;
int n,a[2501],cnt,d[2501],t;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    for(int i=0; i<n; i++)cin >> a[i];
    for(int i=0; i<n; i++){
        d[i]=max(d[i-1],d[i]);
        t=a[i];
        for(int j=i+1; j<n; j++){
            t=a[j]-t;
            if(t<0)break;
            if(t==0)d[j]=d[i-1]+1;
        }
    }
    cout << n-d[n-1];
}