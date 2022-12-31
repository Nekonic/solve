#include <stdio.h>
int main(){
    int n,k,cnt=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }for(int i=n-1; i>=0; i--){
        cnt+=k/a[i];
        k%=a[i];
    }printf("%d",cnt);
}