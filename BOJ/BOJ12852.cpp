#include <iostream>
using namespace std;
int dp[1000000],bac[1000000],n;
void f(int l){
    cout << l << ' ';
    if(l==1)return;
    f(bac[l]);
}
int main(){
    cin >> n;
    for(int i=2; i<=n; i++){
        dp[i]=dp[i-1]+1;
        bac[i]=i-1;
        if(!(i%3)&&dp[i]>dp[i/3]+1){
            dp[i]=dp[i/3]+1;
            bac[i]=i/3;
        }
        if(!(i%2)&&dp[i]>dp[i/2]+1){
            dp[i]=dp[i/2]+1;
            bac[i]=i/2;
        }
    }cout << dp[n] << '\n';
    f(n);
}