#include <stdio.h>
int main(){
    int a,b,c,n;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)n=10000+a*1000;
    else if(a==b||b==c||a==c)n=a==b?1000+a*100:(a==c?1000+c*100:1000+b*100);
    else n=a>=b&&a>=c?a*100:(b>=a&&b>=c?b*100:c*100);
    printf("%d",n);
}