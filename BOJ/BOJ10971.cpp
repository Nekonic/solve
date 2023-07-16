#include <bits/stdc++.h>
using namespace std;
int x,n,m;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> x;
    while(n--){
        cin >> m;
        if(m<x)cout << m << ' ';
    }
}