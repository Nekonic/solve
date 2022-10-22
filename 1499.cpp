#include <stdio.h>
#include <algorithm>
using namespace std;
bool compare(int a, int b){
    return a > b;
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j,x[n];
    for(i=0; i<=n/m; i++){
        for(j=0; j<m; j++){
            scanf("%d",&x[j]);
        }
        sort(x,x+m,compare);
        if(x[0]==0)break;
        printf("%d ",x[0]);
        std::fill_n(x, n, 0);
    }printf("\n");
}
