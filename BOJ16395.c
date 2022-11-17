#include <stdio.h>
long long memo[31][31]={};
long long nCk(int n,int k){
    if(n==k||n==1||k==1)return 1;
    if(memo[n][k]!=0)return memo[n][k];
    return memo[n][k]=nCk(n-1,k-1)+nCk(n-1,k);
}
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%lld",nCk(n,k));
}