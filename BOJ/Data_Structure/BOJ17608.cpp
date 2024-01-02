#include <bits/stdc++.h>
using namespace std;
int n,a[100001],m,cnt;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    for(int i=0; i<n; i++)cin >> a[i];
    for(int i=n-1; i>=0; i--){
        if(a[i]>m){
            m=a[i];
            cnt++;
        }
    }cout << cnt;
}