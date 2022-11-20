#include <stdio.h>
int main(){
    int m,n,sum=0;
    for(int i=0; i<5; i++){
        scanf("%d",&m);
        sum+=m*m;
    }printf("%d",sum%10);
}