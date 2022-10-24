#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c[3];
    scanf("%d%d",&a,&b);
    c[0]=a+b;c[1]=a-b;c[2]=a*b;
    sort(c,c+3);
    printf("%d",c[1]);
}