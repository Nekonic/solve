#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int memo[10000];
int main(){
    int a,b, idx=0,x=0;
    scanf("%d%d",&a,&b);
    for(int i=1; i*i<=b; i++){
        if(a%i==0 && i*i<=a){
            memo[idx++]=i;
            memo[idx++]=a/i;
        }
        if(b%i==0){
            memo[idx++]=i;
            memo[idx++]=b/i;
        }
    }
    sort(memo, memo+idx);
    for(int i=0; i<idx; i++){
        if(memo[i]!=x){
            printf("%d ",memo[i]);
            x=memo[i];
        }
    }
}