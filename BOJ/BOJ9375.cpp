#include <bits/stdc++.h>
using namespace std;
void f(int m){
    unordered_map<string,int> a;
    while(m--){
        string x,y;
        cin >> x >> y;
        a[y]++;
    }int fac=1;
    for(auto x:a)fac*=x.second+1;
    cout << fac-1 << '\n';
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,m;
    cin >> n;
    while(n--){
        cin >> m;
        f(m);
    }
}