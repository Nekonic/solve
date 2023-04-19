#include <bits/stdc++.h>
using namespace std;
int n,k,cnt=0,a[24][24];
int f(int n,int k){
    if(n==0||k==0)return 0;
    if(n==k)return 1;
    if(k==1)return n;
    if(a[n][k]>0)return a[n][k];
    return a[n][k]=(n-1) * (f(n-1, k) + f(n-2, k-1));
}
int main(){
    cin >> n >> k;
    cout << f(n,k);
}
