#include <stdio.h>
int main(){
    int a,b,x=0;
    scanf("%d",&a);
    for(int i=0; i<7; i++){
        scanf("%d",&b);
        if(a<b)x++;
        else x--;
        a=b;
    }
    printf(x==7?"ascending":x==-7?"descending":"mixed");
}