#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,m;
    cin >> n >> m;
    string k,v;
    unordered_map<string,string> a;
    while(n--){
        cin >> k >> v;
        a.insert({k,v});
    }while(m--){
        cin >> k;
        cout << a[k] << '\n';
    }
}