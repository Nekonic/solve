#include <iostream>
#include <vector>
using namespace std;
#define P 1000000007;
vector<long long> memo(10000, -1);
long long fi(long long n){
    if(n==0)return 0;
    else if(n==1)return 1;
    if(memo[n]!=-1)return memo[n];
    return memo[n]=(fi(n-1)+fi(n-2))%P;
}
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    cout << fi(n)%P;
}