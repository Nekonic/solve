#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,m,x;
    char c;
    cin >> n;
    while(n--){
        multiset<int> s;
        cin >> m;
        while(m--){
            cin >> c >> x;
            if(c=='D'){
                if(s.empty())continue;
                if(x==1)s.erase(prev(s.end()));
                else s.erase(s.begin());
            }else s.insert(x);
        }if(s.empty())cout << "EMPTY\n";
        else cout << *prev(s.end()) << ' ' << *s.begin() << '\n';
    }
}