#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a, const void* b){
    if (*(int*)a > *(int*)b)return 1;
    else if (*(int*)a < *(int*)b)return -1;
    else return 0;
}
int main(){
    int a[3];
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    qsort(a,3,sizeof(int),cmp);
    printf("%d %d %d",a[0],a[1],a[2]);
}