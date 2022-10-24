#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n],x=1, i=0, j=n/2;
    a[i][j]=x;--i;++j;
    while (x!=n*n){
        if(i<0)i=n-1;
        if(i>n-1)i=0;
        if(j>n-1)j=0;
        a[i][j]=++x;
        if(x%n==0)++i,j--;
        else --i; ++j;
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}