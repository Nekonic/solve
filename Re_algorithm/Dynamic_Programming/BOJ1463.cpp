#include "bits/stdc++.h"
using namespace std;
const int INF = 1<<29;
int n,a[1000001];
int main(){
    cin >> n;
    a[1]=0;
    for(int i=2; i<=n; i++){
        a[i]=a[i-1]+1;
        if(i%2==0)a[i]=min(a[i],a[i/2]+1);
        if(i%3==0)a[i]=min(a[i],a[i/3]+1);
    }cout << a[n];
}