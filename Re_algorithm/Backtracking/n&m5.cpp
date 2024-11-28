#include "bits/stdc++.h"
using namespace std;
int n,m,a[9],b[9];
bool seen[9];
void rec(int y){
    if(y==m){
        for(int i=0; i<m; i++){
            cout << a[i] << ' ';
        }cout << '\n';
        return;
    }
    for(int i=0; i<n; i++){
        if(!seen[i]){
            seen[i]=1;
            a[y]=b[i];
            rec(y+1);
            seen[i]=0;
        }
    }
}
int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> b[i];
    }sort(b,b+n);
    rec(0);
}