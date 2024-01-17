#include <bits/stdc++.h>
using namespace std;
int n,m,x=0,a[3],ans=1<<29;
int main(){
    cin >> n >> m;
    for(int i=0; i<3; i++){
        cin >> a[i];
    }
    n-=m;
    for(int i=0;i<=n/a[0];i++){
        for(int j=0;j<=n/a[1];j++){
            x = n - i*a[0] - j*a[1];
            if(x>=0 && x%a[2]==0){
                ans = min(ans,i+j+x/a[2]);
            }
        }
    }
    if(ans!=(1<<29))cout << ans;
    else cout << -1;
}