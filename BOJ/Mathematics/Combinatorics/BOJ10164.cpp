#include <bits/stdc++.h>
using namespace std;
int n,m,k,cnt=1,a[20][20]={};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> m >> k;
    int x=1,y=1;a[1][1]=1;
    if(k==0){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(i==1&&j==1)continue;
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
        }cout << a[n][m];
        return 0;
    }for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(cnt==k){
                x=i;
                y=j;
            }cnt++;
        }
    }for(int i=1; i<=x; i++){
        for(int j=1; j<=y; j++){
            if(i==1&&j==1)continue;
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }for(int i=x; i<=n; i++){
        for(int j=y; j<=m; j++){
            if(i==x&&j==y)continue;
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }cout << a[n][m];
}