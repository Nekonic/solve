#include <bits/stdc++.h>
using namespace std;
int n,m,a[9];
bool seen[9];
void rec(int x,int y){
    if(y==m){
        for(int i=0; i<m; i++){
            cout << a[i] << ' ';
        }cout << '\n';
    }for(int i=1; i<=n; i++){
        if(!seen[i]){
            a[y]=i;
            seen[i]=1;
            rec(x+1,y+1);
            seen[i]=0;
        }
    }
}
int main(){
    cin >> n >> m;
    rec(0,0);
}