#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        char a[80];
        scanf("%s",a);
        int x=0, result=0;
        for(int j=0; j<strlen(a); j++){
            if(a[j]=='O'){
                x++;
                result+=x;
            }
            else x=0;
        }
        printf("%d\n",result);
    }
}