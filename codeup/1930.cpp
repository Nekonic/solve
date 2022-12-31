#include <stdio.h>
int SuperSum(int k, int n, int sum){
    if(k==0)return n;
    for(int i=1; i<=n; i++){
        sum+=SuperSum(k-1,i,0);
    }
    return sum;
}
int main(){
    int k,n;
    while( scanf("%d %d", &k, &n) != EOF ){
        printf("%d\n", SuperSum(k, n, 0));
    }
}