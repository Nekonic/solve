#include "bits/stdc++.h"
using namespace std;
int n,m,a[11];
void rec(int y){
    if(y==m){
        for(int i=0; i<m; i++){
            cout << a[i] << ' ';
        }cout << '\n';
        return;
    }
    for(int i=1; i<=n; i++){
        a[y]=i;
        rec(y+1);
    }
}
int main(){
    cin >> n >> m;
    rec(0);
}