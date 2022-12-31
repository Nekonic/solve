#include <stdio.h>
#include <algorithm>
#include <numeric>
using namespace std;
int gcd(int a, int b) {
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}
int main(){
    int n,i,a,b;
    scanf("%d",&n);
    scanf("%d",&a);
    for(i=1; i<n; i++){
        scanf("%d",&b);
        a=lcm(a,b);
    }
    printf("%d",a);
    return 0;
}