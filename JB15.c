#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        char x[1001]={};
        scanf("%s",x);
        int sum=0;
        int half=x[strlen(x)-1]-'0';
        for(int i=0; i<strlen(x); i++){
            int temp=x[i];
            sum=((temp-48)%9+sum)%9;
        }if(sum%9==0)printf("9");
        else if(half%2==0&&sum%3==0)printf("6");
        else if(sum%3==0)printf("3");
        else printf("1");
        if(n!=0)printf(" ");
    }
    return 0;
}