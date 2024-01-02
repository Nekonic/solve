#include <bits/stdc++.h>
using namespace std;
long long a,b,ans=1LL<<60;
void f(long long l,long long cnt){
    if(l>b)return;
    if(l==b)ans=min(ans,cnt);
    f(l*2,cnt+1);
    f(l*10+1,cnt+1);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> a >> b;
    f(a,0);
    if(ans==1LL<<60)cout << -1;
    else cout << ans+1;
}