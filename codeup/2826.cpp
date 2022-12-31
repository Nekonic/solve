#include <stdio.h>
int p(int n,int k){
    int result=0;
    if(n<k)k=n;
    if(n==0)return 1;
    for(int i=1; i<=k; i++){
        result+=p(n-i,i);
    }
    return result;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",p(n,n));
}