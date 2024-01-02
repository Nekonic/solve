#include <bits/stdc++.h>
using namespace std;
int memo[1001];
int f(int i){
    if(i<=2)return i;
    if(memo[i]!=0)return memo[i];
    return memo[i]=(f(i-1)+f(i-2))%10007;
}
int main(){
    int n;
    cin >> n;
    cout << f(n);
}