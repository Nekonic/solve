#include <iostream>
using namespace std;
int gcd(int a,int b){
    return b?gcd(b,a%b):a;
}
int lcm(int a, int b) {
    return a * (b / gcd(a, b));
}
int main(){
    int month[12]={31,28,31,30,31,30,31,31,30,31,30};
    int a,b,c,n,dx=0,m=0,y=2100,d=1;
    char days[7][4]={"FRI","SAT","SUN","MON","TUE","WED","THU"};
    scanf("%d%d%d",&a,&b,&c);
    n=lcm(c,lcm(a,b));
    for(int i=0; i<n; i++){
        dx++;
        dx%=7;
        if(y%4==0&&y%100!=0||y%400==0)month[1]=29;
        else month[1]=28;
        if(month[m]==d){
            if(m==10){
                m=0;
                y++;
            }else m++;
            d=0;
        }d++;
    }printf("%04d-%02d-%02d %s",y,m+1,d,days[dx]);
}