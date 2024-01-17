#include <iostream>
using namespace std;
int k,n,m,y=2022,d,a,b,c;
int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
    scanf("%d%d%d",&k,&n,&m);
    while(1){
        if(!(c&1)){
            if(a+b >= k) break;
            a += n;
        }if(c%3==0)b+=m;
        c++;
    }c++;
    while(c!=0){
        y++;
        m=1;
        if(y%4==0&&y%100!=0||y%400==0)month[1]=29;
        else month[1]=28;
        for(int i=0;i<12;i++){
            if(month[i]<c){
                c -= month[i];
                m += 1;
            }else{
                d = c;
                c = 0;
                break;
            }
        }
    }
    printf("%04d/%02d/%02d",y,m,d);
}
