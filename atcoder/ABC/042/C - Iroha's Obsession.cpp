#include <bits/stdc++.h>
using namespace std;
int n, m, x;
bool a[10],flag;
string s;
int main() {
    cin >> n >> m;
    while (m--) {
        cin >> x;
        a[x]=1;
    }
    for(int k=n; k<1000001; k++) {
        flag=0;
        s=to_string(k);
        for(auto&i:s){
            if(a[i-'0'])flag=1;
        }if(flag)continue;
        cout << s;
        return 0;
    }
}