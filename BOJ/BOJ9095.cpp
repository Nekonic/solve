#include <bits/stdc++.h>
using namespace std;
int tc,n,memo[11];
int f(int k){
    if(memo[k]!=0)return memo[k];
    return memo[k]=f(k-1)+f(k-2)+f(k-3);
}
int main(){
    memo[1]=1;
    memo[2]=2;
    memo[3]=4;
    cin >> tc;
    while(tc--){
        cin >> n;
        cout << f(n) << '\n';
    }
}