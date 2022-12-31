#include <stdio.h>
int main(){
    int n,m,min=1000000,max=0;
    scanf("%d",&n);
    while (n--){
        scanf("%d",&m);
        if(min>m)min=m;
        if(max<m)max=m;
    }
    printf("%d",max*min);
}