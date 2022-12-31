#include <stdio.h>
#include <stdbool.h>
bool memo[10000]={false};
bool self(int n){
    int r=n;
    while (n>0){
        r+=n%10;
        n/=10;
    }
    return memo[r+n]=true;
}
int main(){
    int n;
    for(int i=1; i<=10000; i++){
        self(i);
        if(!memo[i])printf("%d\n",i);
    }
}