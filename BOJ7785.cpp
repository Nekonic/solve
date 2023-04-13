#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    set<string,greater<string>> a;
    cin >> n;
    while(n--){
        string s,l;
        cin >> s >> l;
        if(l=="enter")a.insert(s);
        else a.erase(s);
    }for(auto&i : a)cout << i << '\n';
}