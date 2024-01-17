#include <iostream>
#include <vector>
using namespace std;
int n,x,ans=0,cnt=0,a[100001];
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }for(int i=1; i<n; i++){
        if(a[i-1]<a[i])cnt+=(a[i]-a[i-1])*2;
        else cnt-=(a[i-1]-a[i])/2;
        ans=max(ans,cnt);
    }cout << ans;
}