#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000009];
    unsigned long long n=0, sum=0,cnt=0;
    scanf("%s", a);
    for(int i=0; i<strlen(a); i++){
        sum+=a[i]-'0';
    }if(strlen(a)>1)cnt++;
    while (1){
        if(n==0){
            if(sum<10){
                if(sum%3==0)printf("%d\nYES",cnt);
                else printf("%d\nNO",cnt);
                return 0;
            }
            cnt++;
            n=sum;
            sum=0;
        }else{
            sum+=n%10;
            n/=10;
        }
    }
}