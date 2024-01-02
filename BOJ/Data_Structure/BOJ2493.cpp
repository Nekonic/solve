#include <bits/stdc++.h>
using namespace std;
int n,m;
stack<pair<int,int>> t;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    t.push({1<<30,0});
    for(int i=1; i<=n; i++){
        cin >> m;
        while(t.top().first<m)t.pop();
        cout << t.top().second << ' ';
        t.push({m,i});
    }
}