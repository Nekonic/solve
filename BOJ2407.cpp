#include <iostream>
#include <cmath>
using namespace std;
__uint128_t memo[101][101]={};
__uint128_t c(int n, int m){
    if(n==m||m==0)return memo[n][m]=1;
    if(memo[n][m]!=0)return memo[n][m];
    return memo[n][m]=c(n-1,m-1)+c(n-1,m);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    __uint128_t result = c(n,m);
    string r = ""; 
    string f = to_string((long long) (result /  (__uint128_t) pow(10, 15))) ; 
    string s = to_string((long long) (result % (__uint128_t) pow(10, 15))) ; 
    if ( f == "0") { 
        r = s ; 
    } else {
        r = f + s; 
    }
    cout <<  r  << '\n';
}