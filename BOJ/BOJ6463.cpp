#include <iostream>
using namespace std;
int main(){
    unsigned long long t,n,m;
    while (scanf("%d",&n)!=EOF){
        m=n;
        for(int i=1; i<m; i++){
            n*=i;
            n%=1000000;
            while(n%10==0)n/=10;
        }
        printf("%5d -> %d\n",m,n%10);
    }
}