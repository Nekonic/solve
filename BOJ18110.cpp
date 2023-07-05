#include <bits/stdc++.h>
using namespace std;
int n,a[1000001],s;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    if(!n){
        cout << 0;
        return 0;
    }for(int i=0; i<n; i++)cin >> a[i];
    sort(a,a+n);
    int d=n*0.15+0.5;
    for(int i=d; i<n-d; i++){
        s+=a[i];
    }cout << int((double)s/(n-2*d)+0.5);
}