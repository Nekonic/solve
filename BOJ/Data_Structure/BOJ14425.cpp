#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,cnt=0;
    unordered_set<string> a;
    string s;
    cin >> n >> m;
    while(n--){
        cin >> s;
        a.insert(s);
    }while(m--){
        cin >> s;
        if(a.find(s)!=a.end())cnt++;
    }cout << cnt;
}