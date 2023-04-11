#include <bits/stdc++.h>
using namespace std;
int a[21],cnt=0,n,s;
void f(int cur, int sum){
    if(cur==n){
        if(sum==s)cnt++;
        return;
    }f(cur+1,sum);
    f(cur+1,sum+a[cur]);
}
int main(){
    cin >> n >> s;
    for(int i=0; i<n; i++)cin >> a[i];
    f(0,0);
    if(s==0)cnt--;//공집합
    cout << cnt;
}