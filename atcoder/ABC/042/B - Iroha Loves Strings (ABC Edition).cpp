#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    string s;
    vector<string> v;
    cin >> n >> m;
    while(n--){
        cin >> s;
        v.emplace_back(s);
    }
    sort(v.begin(),v.end());
    for(auto&i:v)cout << i;
}