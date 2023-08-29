#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n,m,x;
    cin >> n >> m;
    unordered_map<int,bool> s1;
    while(n--){
        cin >> x;
        s1[x]=1;
    }while(m--){
        cin >> x;
        auto it = s1.find(x);
        if(it!=s1.end())s1.erase(it);
        else s1[x]=1;
    }cout << s1.size();
}