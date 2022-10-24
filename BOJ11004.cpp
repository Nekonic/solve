#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
    int n, idx;
    scanf("%d%d",&n,&idx);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    printf("%d\n",a[idx-1]);
}