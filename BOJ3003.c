#include <stdio.h>
int main(){
    int a[]={1,1,2,2,2,8},n;
    for(int i=0; i<6; i++){
        scanf("%d",&n);
        printf("%d ",a[i]-n);
    }
}