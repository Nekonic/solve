#include <stdio.h>
int main(){
    int n,m,a[10000]={},cnt=0,x,sum=0;
    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }for(int i=0; i<n; i++){
        sum=0;
        for(int j=i; j<n; j++){
            sum+=a[j];
            if(sum==m){
                cnt++;
                break;
            }
        }
    }printf("%d",cnt);
}