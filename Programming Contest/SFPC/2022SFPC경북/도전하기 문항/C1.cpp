#include <bits/stdc++.h>
using namespace std;
int a[504][504],sum,maxsum=0,m;
void dfs(int i,int j){
    for(int y=i; y<2+i; y++){
        for(int x=j; x<2+j; x++){
            sum+=a[y][x];
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            sum=0;
            dfs(i,j);
            maxsum=max(maxsum,sum);
        }
    }cout << maxsum;
}