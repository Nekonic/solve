#include <stdio.h>
#define Large 1999
int nCk(int n,int k){
    unsigned long long int x=1;
    if (k>n-k)k=n-k;
    for(int i=0;i<k;i++){
        x*=(n-i);
        x/=(i+1);
    }
	return x;
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%d",nCk(n,k)%Large);
	return 0;
}