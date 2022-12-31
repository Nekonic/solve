#include <stdio.h>
int main(){
    int n,J=0,O=0,I=0;
    scanf("%d",&n);
    char strings[n];
    scanf("%s",strings);
    for(int i=0; i<n; i++){
        if(strings[i]=='J')++J;
        else if(strings[i]=='O')++O;
        else ++I;
    }
    for(int i=0; i<J; i++)printf("J");
    for(int i=0; i<O; i++)printf("O");
    for(int i=0; i<I; i++)printf("I");
}