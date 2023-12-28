#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a[101][101],x;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> x;
            a[i][j]+=x;
        }
    }for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << ' ';
        }cout << '\n';
    }
}