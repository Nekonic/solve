#include <stdio.h>
long long mod(long long a, long long b,long long c){
    if(b==0)return 1;
    if(b==1)return a%c;
    if(b%2!=0)return mod(a,b-1,c)*a%c;
    return mod(a*a%c,b/2,c)%c;
}
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    long long x=mod(a,b,c);
    printf("%lld",x);
}