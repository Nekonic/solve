#include "bits/stdc++.h"
using namespace std;
int tc,n,d[12];
void solve(){
    cin >> n;
    cout << d[n] << '\n';
}
int main(){
    cin >> tc;
    d[1]=1;
    d[2]=2;
    d[3]=4;
    for(int i=4; i<12; i++){
        d[i]=d[i-1]+d[i-2]+d[i-3];
    }while(tc--)solve();
}