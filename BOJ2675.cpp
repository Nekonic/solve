#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int x;
        char a[8];
        scanf("%d%s",&x,a);
        for(int j=0; j<strlen(a); j++){
            for(int k=0; k<x; k++){
                printf("%c",a[j]);
            }
        }
        printf("\n");
    }
}