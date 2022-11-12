#include <stdio.h>
int main(){
    int n,m,sum=0,x,y;
    scanf("%d%d",&n,&m);
    while (m--)
    {
        scanf("%d%d",&x,&y);
        sum+=x*y;
    }
    printf(sum==n?"Yes":"No");
}