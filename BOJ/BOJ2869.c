#include <stdio.h>
int main(){
    unsigned long long a,b,v,n=1,s;
    scanf("%d%d%d",&a,&b,&v);
    printf("%d",(v-a)%(a-b)==0?(v-a)/(a-b)+1:(v-a)/(a-b)+2);
}