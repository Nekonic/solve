#include <bits/stdc++.h>
using namespace std;
int n,d[10000000];
int f(int x){
    cout << x;
    int ans=d[x-1];
    if(x%3)ans=min(d[x/3],ans);
}
int main(){
    cin >> n;
    f(n);
}