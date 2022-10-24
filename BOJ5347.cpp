#include <stdio.h>
int gcd(long long int a, long long int b){
	return b ? gcd(b, a%b) : a;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        long long int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",a/gcd(a,b)*b);
    }
}