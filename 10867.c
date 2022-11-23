#include <stdio.h>
#include <stdbool.h>
int main(){
    bool a[2001]={0};
    int n,m;
    scanf("%d",&n);
    while (n--){
        scanf("%d",&m);
        a[m+1000]=true;
    }for(int i=0; i<2001; i++){
        if(a[i])printf("%d ",i-1000);
    }
}