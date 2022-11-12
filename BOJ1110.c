#include <stdio.h>
int main(){
    int n,sum=100,i=0,t;
    scanf("%d",&n);t=n;
    while(sum!=n){
        i++;
        sum=t%10*10+(t/10+t%10)%10;
        t=sum%100;
    }
    printf("%d",i);
}