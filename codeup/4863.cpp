#include <bits/stdc++.h>
using namespace std;
int memo[101][101]={},n,m,x;
int a[101]={};
int f(int x,int c,int p){
    if(x>n)return p;
    if(memo[x][c])return memo[x][c]+p;
    int ans = 10000000;
    if(a[x]==1)return f(x+1, c, p);
    if(c>=3)ans = min(ans, f(x+1, c-3, p));
    ans = min(ans, f(x+1, c, p+10));
	ans = min(ans, f(x+3, c+1, p+25));
	ans = min(ans, f(x+5, c+2, p+37));
    memo[x][c]=ans-p;
    return ans;
}
int main(){
    cin >> n >> m;
    for(int i=0; i<m; i++){ 
        cin >> x;
        a[x]++;
    }
    f(1,0,0);
    cout << f(1,0,0)*1000;
}