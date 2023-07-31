#include <bits/stdc++.h>
using namespace std;
int n,a[1001],d[1001],p[1001],dp[1001];
int main(){
    cin >> n;
    for(int i=0; i<n; i++)cin >> a[i];
    for(int i=0; i<n; i++){
        d[i]=1;
        for(int j=0; j<i; j++){
            if(a[j]<a[i])d[i]=max(d[i],d[j]+1);
        }
    }for(int i=n-1; i>=0; i--){
        p[i]=1;
        for(int j=n-1; j>=0; j--){
            if(a[j]<a[i])p[i]=max(p[i],p[j]+1);
        }dp[i]=d[i]+p[i];
    }cout << *max_element(dp,dp+n)-1;
}