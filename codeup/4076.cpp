#include <iostream>
using namespace std;
int main(){
    double m,v;
    int r;
    scanf("%d%d%d",&m,&v,&r);
    printf("%.2lf ",m/v);
    if((m/v)<r)printf("UP");
    else if((m/v)==r)printf("STOP");
    else printf("DOWN");
}