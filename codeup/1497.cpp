#include <stdio.h>
int main(){
    int a,b,n;
    scanf("%d",&n);
    int i,x[n/2];
    for(i=0; i<n/2; i++){
        scanf("%d%d",&a,&b);
        x[i]=a>b?a:b;
    }
    for(i=0; i<n/2; i++){
        printf("%d ",x[i]);
    }
}