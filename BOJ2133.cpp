#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a[31]={1,3};
    cin >> n;
    for(int i=2; i<=n/2; i++){
        a[i]=a[i-1]*4-a[i-2];
    }if(n&1)cout << 0;
    else cout << a[n/2];
}