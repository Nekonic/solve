#include <stdio.h>
int main(){
    int n,x=0;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for(int i=0; i<n; i++){
        x+=a[i]-'0';
    }
    printf("%d",x);
}