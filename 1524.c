#include <stdio.h>
int n,m,arr[11][11]={},cnt=0;
int main(){
    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++){
            scanf("%d",&arr[i][j]);
        }
    }scanf("%d%d",&n,&m);
    if(arr[n][m]==1){
        printf("-1");
    }else{
        for(int i=n-1; i<=n+1; i++){
            for(int j=m-1; j<=m+1; j++){
                if(arr[i][j]==1)cnt++;
            }
        }
        printf("%d",cnt);
    }
}