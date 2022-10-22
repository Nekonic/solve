#include <stdio.h>
using namespace std;
int main(){
    int a[7];
    int max1=0;
    int max2=0;
    for(int i=0; i<7; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<7; i++){
        if(max1<a[i]&&a[i]%2==0)max1=a[i];
        if(max2<a[i]&&a[i]%2!=0)max2=a[i];
    }
    printf("%d",max1+max2);
}