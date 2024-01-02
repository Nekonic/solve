#include <bits/stdc++.h>
using namespace std;
int memo[101][101]={},n,m,x;
bool a[101];
int f(int x, int c, int p){
    if(x>n)return p;
    int ans=100;
    if(memo[x][c])return memo[x][c]+p;
    if(a[x])return f(x+1,c,p);
    if(3<=c)ans = min(ans,f(x+1,c-3,p));
    ans = min(ans,f(x+1,c,p+10));
    ans = min(ans,f(x+3,c+1,p+25));
    ans = min(ans,f(x+5,c+2,p+37));
    memo[x][c]=ans-p;
    return ans;
}
int main(){
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> x;
        a[x]=1;
    }f(1,0,0);
    cout << f(1,0,0)*1000;
}