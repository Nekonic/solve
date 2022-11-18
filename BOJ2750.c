#include <stdio.h>
#include <stdbool.h>
int main(){
    int n,m;
    bool a[2002]={0};
    scanf("%d",&n);
    while (n--){
        scanf("%d",&m);
        a[m+1000]=1;
    }for(int i=0; i<2001; i++){
        if(a[i])printf("%d\n",i-1000);
    }
}