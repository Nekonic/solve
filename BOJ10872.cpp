#include <stdio.h>
int f(int n){
    int fc=1;
    for(int i=1; i<=n; i++){
        fc*=i;
    }
    return fc;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
}