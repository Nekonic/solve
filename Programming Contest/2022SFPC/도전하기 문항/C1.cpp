#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int a,b,c,n,m=0,y=2023,d=1;
    scanf("%d%d%d",&a,&b,&c);
    int b1=2,b2=3;
    n=0;
    while (a>n){
        if(b1==2){
            n+=b;
            b1=0;
        }
        if(b2==3){
            n+=c;
            b2=0;
        }
        b1++;
        b2++;
        if((y%4==0&&y%100!=0)||y%400==0)month[1]=29;
        else month[1]=28;
        if(month[m]==d){
            if(m==11){
                m=0;
                y++;
            }else m++;
            d=0;
        }d++;
    }if(b1<=1)d++;
    printf("%04d/%02d/%02d",y,m+1,d);
}
