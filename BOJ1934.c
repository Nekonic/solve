#include <stdio.h>
int gcd(int n, int m){
    return !m?n:gcd(m,n%m);
}
int main(){
    int t,n,m;
    scanf("%d",&t);
    while (t--){
        scanf("%d%d",&n,&m);
        printf("%d\n",n*m/gcd(n,m));
    }
}