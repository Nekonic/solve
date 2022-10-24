#include <stdio.h>
int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}
int lcm(int a, int b) {
    return a * (b / gcd(a, b));
}
int main(){
    int n;
    scanf("%d",&n);
    int x, g, l;
    scanf("%d",&g);l=g;
    for(int i=1; i<n; i++){
        scanf("%d",&x);
        g=gcd(g,x);
        l=lcm(l,x);
    }
    printf("%d\n%d",g,l);
}