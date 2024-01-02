#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    long long n,a[5001]={},b[3];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }sort(a,a+n);
    long long s,e,ans=1LL<<60,m;
    for(int i=0; i<n-2; i++){
        s=i+1;
        e=n-1;
        while(s<e){
            m=a[i]+a[s]+a[e];
            if(abs(m)<ans){
                ans=abs(m);
                b[0]=a[i];
                b[1]=a[s];
                b[2]=a[e];
            }if(m>0)e--;
            else s++;
        }
    }for(int i=0; i<3; i++)cout << b[i] << ' ';
}