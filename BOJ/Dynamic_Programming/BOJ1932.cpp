#include <bits/stdc++.h>
using namespace std;
int d[510][510]={},a[501][501]={},n;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cin >> a[i][j];
        }
    }for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            d[i][j]=max(d[i-1][j-1],d[i-1][j])+a[i-1][j-1];
        }
    }cout << *max_element(&d[0][0],&d[509][509]);
}