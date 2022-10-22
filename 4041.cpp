#include <stdio.h>
#include <string.h>
void back(char *a, int x, int n, int sum){
    if(*(a+x)!='0')n++;
    if(x<0){
        printf("\n%d",sum);
        return;
    }
    if(n!=0){
        printf("%c",a[x]);
        sum+=a[x]-'0';
    }
    back(a, x-1, n, sum);
}
int main(){
    char n[20]={};
    scanf("%s",n);
    if(strlen(n)==1){
        printf("%d\n%d",n[0]-'0',n[0]-'0');
        return 0;
    }
    back(n,strlen(n)-1,0,0);
}