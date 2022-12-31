#include <stdio.h>
#include <string.h>
int main(){
    char str[1001], str1[1001][1001], temp[1001];
    scanf("%s", str);
    for(int i=0; i<strlen(str); i++){
        for(int j=i; j<strlen(str); j++){
            str1[i][j-i]=str[j];
        }
    }for(int i=0; i<strlen(str); i++){
        for(int j=i; j<strlen(str); j++){
            if(strcmp(str1[i],str1[j])>0){
                strcpy(temp, str1[i]);
                strcpy(str1[i],str1[j]);
                strcpy(str1[j], temp);
            }
        }
    }
    for(int i=0; i<strlen(str); i++){
        printf("%s\n",str1[i]);
    }
}