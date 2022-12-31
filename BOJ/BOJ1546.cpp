#include <stdio.h>
int main(){
    int n,max=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        if(a[i]>max)max=a[i];
    }
    double result=0;
    for(int i=0; i<n; i++){
        result+=(double)a[i]/max*100;
    }
    printf("%lf",result/n);
}