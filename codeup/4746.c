#include <stdio.h>
int main(){
    int a,b,c,n;
    scanf("%d%d%d%d",&a,&b,&c,&n);
    if(c+n>=60){
        b+=(c+n)/60;
        a+=b/60;
    }printf("%d %d %d",a%24,b%60,(c+n)%60);
}