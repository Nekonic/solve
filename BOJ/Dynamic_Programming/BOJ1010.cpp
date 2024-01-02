#include <bits/stdc++.h>
using namespace std;
long long nCk(int n,int k){
    if(k==0||n==k)return 1;
    if(n==1)return k;
    return nCk(n-1,k-1)+nCk(n-1,k);
}
int main(){
    int n,k,tc;
    cin >> tc;
    while(tc--){
        cin >> n >> k;
        cout << nCk(n,k) << '\n'; 
    }
}