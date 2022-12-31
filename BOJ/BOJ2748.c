#include <stdio.h>
long long memo[91]={};
long long fi(int n){
    if(n<=2)return 1;
    if(memo[n]!=0)return memo[n];
    return memo[n]=fi(n-1)+fi(n-2);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%lld",fi(n));
}