#include <bits/stdc++.h>
using namespace std;
int n;
double s[10001],mx;
int main(){
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%lf",&s[i]);
    }for(int i=2; i<=n; i++){
        s[i]=max(s[i]*s[i-1],s[i]);
        mx=max(mx,s[i]);
    }printf("%.3f",mx);
}