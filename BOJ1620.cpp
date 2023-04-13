#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,m;
    unordered_map<int,string> a;
    unordered_map<string,int> b;
    string s;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> s;
        a.insert({i,s});
        b.insert({s,i});
    }for(int i=0; i<m; i++){
        cin >> s;
        if(isdigit(s[0]))cout << a[stoi(s)] << '\n';
        else cout << b[s] << '\n';
    }
}