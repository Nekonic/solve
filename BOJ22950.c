#include <stdio.h>
#include <math.h>
int main(){
    int n,k,m=0;
    char c;
    scanf("%d",&n);
    while (n){
        scanf("%c",&c);
        if(c=='1')m+=pow(2,n);
        n--;
    }scanf("%d",&k);k=pow(2,k);
    if(m%k==0)printf("YES");
    else printf("NO");
}