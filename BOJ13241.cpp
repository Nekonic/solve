#include <stdio.h>
long long int gcd(long long int a, long long int b) {
	long long int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}
long long int lcm(long long int a, long long int b) {
	return (a * b) / gcd(a, b);
}
int main(){
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    printf("%lld",lcm(a,b));
}