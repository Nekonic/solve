#include <bits/stdc++.h>
using namespace std;
int n,mx=0,w[101],v[101],k,d[101][100001];
int main(){
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        cin >> w[i] >> v[i];
    }for(int i=1; i<=n; i++){
        for(int j=0; j<=k; j++){
            if(j-w[i]>=0)d[i][j]=max(d[i-1][j],d[i-1][j-w[i]]+v[i]);
            else d[i][j]=d[i-1][j];
        }
    }
    cout << d[n][k];
}