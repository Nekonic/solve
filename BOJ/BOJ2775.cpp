#include <iostream>
using namespace std;
int memo[15][15];
int ncr(int i,int j){
    if(i==0)return memo[i][j]=j;
    if(j==1)return memo[i][j]=1;
    if(memo[i][j]!=0)return memo[i][j];
    return memo[i][j]=ncr(i-1,j)+ncr(i,j-1);
}
int main(){
    int a,b,t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    while (t--){
        cin >> a >> b;
        ncr(a,b);
        cout << memo[a][b] << '\n';
    }
}