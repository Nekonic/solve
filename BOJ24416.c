#include <stdio.h>
int x=1;
int fib(int n) {
    if (n==1||n==2)return 1;
    x++;
    return(fib(n-1)+fib(n-2));
}
int main(){
    int n;
    scanf("%d",&n);fib(n);
    printf("%d %d",x,n-2);
}