#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int n,m,x=0,b;
    scanf("%d",&n);
    while (n--){
        scanf("%d",&m);
        for(b=2; b<=64; b++){
            char str1[10001]={},str2[10001]={};
            int cnt=0,temp=m;x=0;
            while (temp){
                str1[cnt++]=temp%b;
                temp/=b;
            }for(int i=0; i<cnt; i++){
                str2[cnt-1-i]=str1[i];
            }for(int i=0; i<cnt; i++){
                if(str2[i]==str1[i])x++;
            }if(x==cnt)break;
        }printf("%d\n",b<=64);
    }
}