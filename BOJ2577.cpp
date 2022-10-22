#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int x=a*b*c,arr[10]={};
    while (x>0)
    {
        arr[x%10]++;
        x/=10;
    }
    for(int i=0; i<10; i++){
        printf("%d\n",arr[i]);
    }
}