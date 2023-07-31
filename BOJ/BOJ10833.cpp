#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000000;
int n,d[101][10];
int ans(int r){
    if(r==9)return d[n][r];
    return(ans(r+1)+d[n][r])%mod;
}
int main(){
    cin >> n;
    for(int i=1; i<10; i++)d[1][i]=1;
    for(int i=2; i<=n; i++){
        for(int j=0; j<10; j++){
            if(!j)d[i][0]=d[i-1][j+1];
            else if(j==9)d[i][9]=d[i-1][j-1];
            else d[i][j]=(d[i-1][j-1]+d[i-1][j+1])%mod;
        }
    }cout << ans(0)%mod;
}