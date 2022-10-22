#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("2 ");
    for (int i = log2(n); i >= 0; --i) {
        bool result = n >> i & 1;
        printf("%d", result);
    }
    printf("\n8 %o",n);
    printf("\n16 %X",n);
}