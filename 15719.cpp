#include <stdio.h>
int main(){
    long long int n,sum=0;
    scanf("%lld",&n);
    for(int i=0; i<n; i++){
        long long int x;
        scanf("%lld",&x);
        sum+=x;
    }
    printf("%lld",sum-n*(n-1)/2);
}