#include <stdio.h>
#include <string.h>
void binary(int n) {
    if(n/2)binary(n/2);
    printf("%d", n%2);
}
int main(){
    char a[100]="";
    scanf("%s",a);
    for(int i=0; i<strlen(a); i++){
        printf("%d ",a[i]);
    }printf("\n");
    for(int i=0; i<strlen(a); i++){
        binary(a[i]);
        printf(" ");
    }
}