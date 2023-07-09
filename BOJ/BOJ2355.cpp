#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    long long n,m,t1,t2;
    cin >> n >> m;
    t1=min(m,n);
    t2=max(m,n);
    n=t1;m=t2;
    long long s1,s2;
    s1=n*(n-1)/2;
    s2=m*(m+1)/2;
    cout << s2-s1;
}