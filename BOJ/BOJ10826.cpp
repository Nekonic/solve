#include <iostream>
using namespace std;
unsigned long long memo[10001]={};
unsigned long long fi(int n){
    if(n==0)return 0;
    if(n<=2)return 1;
    if(memo[n]!=0)return memo[n];
    return memo[n]=fi(n-1)+fi(n-2);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    cout << fi(n);
}