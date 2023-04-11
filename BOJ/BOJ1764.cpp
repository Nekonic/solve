#include <bits/stdc++.h>
using namespace std;
unordered_map<string,bool> s;
int main(){
    vector<string> v;
    int n,m;
    string str;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> str;
        s[str]=1;
    }for(int i=0; i<m; i++){
        cin >> str;
        if(s.find(str)!=s.end()){
            v.push_back(str);
        }
    }sort(v.begin(),v.end());
    cout << v.size() << '\n';
    for(auto i : v)cout << i << '\n';
}