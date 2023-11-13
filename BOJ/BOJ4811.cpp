#include <bits/stdc++.h>
using namespace std;
long long d[1001][1001];
long long f(int w,int h){
    if(w<0||h<0||h>w)return 0;
    if(h==0)return d[w][h]=1;
    if(d[w][h])return d[w][h];
    return d[w][h]=f(w,h-1)+f(w-1,h);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    while(n){
        cout << f(n,n) << '\n';
        cin >> n;
    }
}