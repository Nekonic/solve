#include <stdio.h>
int main(){
	int a;
	int x = 0x7d1c4b0a;
	scanf("%08x",&a);
	printf("\n%08x\n",a);
	int s = x^a;
	printf("\n%08x\n",s);
	printf("%d",s);
}

