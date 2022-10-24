#include <stdio.h>
#define P 1000000007LL
unsigned long long int nCk(unsigned long long int n,unsigned long long int k){
    unsigned long long int x=1;
    if(n-k<n/2)k=n-k;
    for(int i=1;i<=k;i++){
        x=(x*n)/i;
        n--;
    }
	return x%P;
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%lld",nCk(n,k));
	return 0;
}