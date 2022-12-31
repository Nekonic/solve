#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int m[n],cnt=0;
    for(int i=n-1; i>=0; i--){
        scanf("%1d", &m[i]);
        if(m[i]==1)cnt++;
    }scanf("%d",&k);
    if(cnt==0){
        printf("YES");
        return 0;
    }else cnt=0;
    for(int i=0; i<n; i++){
        if(m[i]==1)break;
        else cnt++;
    }
    if(k==0||cnt>=k)printf("YES");
    else printf("NO");
}