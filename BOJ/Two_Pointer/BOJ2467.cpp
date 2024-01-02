#include <bits/stdc++.h>
using namespace std;
const int INF=1<<30;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n,a[100002];
    cin >> n;
    for(int i=0; i<n; i++)cin >> a[i];
    int s=0,e=n-1,x=abs(a[0]+a[n-1]);
    int x1=a[s],x2=a[e];
    while(s<e){
        int t=a[s]+a[e];
        if(abs(t)<x){
            x=abs(t);
            x1=a[s];
            x2=a[e];
        }else if(t<0)s++;
        else e--;
    }cout << x1 << ' ' << x2;
}