#include <bits/stdc++.h>
using namespace std;
int n,m,cnt;
int v[2001][2001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        v[a][b]=1;
    }for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(v[i][k]&&v[k][j])v[i][j]=1;
            }
        }
    }for(int i=1; i<=n; i++){
        int cnt=0;
        for(int j=1; j<=n; j++){
            if(!v[i][j]&&!v[j][i])cnt++;
        }cout << cnt-1 << '\n';
    }
}