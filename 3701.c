#include <stdio.h>
long long memo[51][51]={};
long long int f(int i,int j){
    if(j==0||i==0||i==1)return 1;
    else if(i==j)return 1;
    else if(memo[i][j]!=0)return memo[i][j];
    return memo[i][j]=f(i-1,j-1)+f(i-1,j);
}
int main(){
	int n;
	scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%lld ",f(i,j));
        }
        printf("\n");
    }
	return 0;
}