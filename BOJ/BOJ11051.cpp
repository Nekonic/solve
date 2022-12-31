#include <iostream>
#include <vector>
#define P 10007
using namespace std;
int memo[1001][1001]={};
int nCk(int n, int k){
    if(n==k||k==0)return memo[n][k]=1;
    if(memo[n][k]!=0)return memo[n][k];
    return memo[n][k]=(nCk(n-1,k-1)%P+nCk(n-1,k)%P)%P;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin >> n >> k;
    cout << nCk(n,k)%P;
}