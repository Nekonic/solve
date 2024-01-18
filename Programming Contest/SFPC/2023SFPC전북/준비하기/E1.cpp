#include <bits/stdc++.h>
using namespace std;
long long n,m,k,a[101],b[101],cnt;
bool used[101];
void f(int l,int v,int sum){
    if(l==n){
        if(sum*m<=k&&v==3){
            cnt++;
        }
        return;
    }f(l+1,v+1,sum+a[l]);
    f(l+1,v,sum);
}
int main(){
    cin >> n;
    for(int i=0; i<n; i++)cin >> a[i];
    sort(a,a+n);
    cin >> m >> k;
    f(0,0,0);
    cout << cnt;
}