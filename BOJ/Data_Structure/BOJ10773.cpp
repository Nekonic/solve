#include <bits/stdc++.h>
using namespace std;
int n,m,ans;
stack<int> s;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    while(n--){
        cin >> m;
        if(!m)s.pop();
        else s.emplace(m);
    }while(!s.empty()){
        ans+=s.top();
        s.pop();
    }
    cout << ans;
}