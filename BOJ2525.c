#include <stdio.h>
int main(){
    int a,b,n;
    scanf("%d%d%d",&a,&b,&n);
    if(b+n>=60)a+=(b+n)/60;
    printf("%d %d",a%24,(b+n)%60);
}