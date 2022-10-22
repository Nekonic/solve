#include <stdio.h>
struct x
{
    int max1, idx, max2;
};

int main(){
    x max;
    max.max1=0;
    char str;
    int arr[26]={};
    while (scanf("%c",&str)!=EOF)
    {
        if ('a'<= str && str <= 'z'){
            arr[str-97] += 1;
        }
        else if ('A'<= str && str<= 'Z'){
            arr[str-65] += 1;
        }
    }
    for(int i=0; i<26; i++){
        if(max.max1<=arr[i]){
            max.max2=max.max1;
            max.max1=arr[i];
            max.idx=i;
        }
    }
    if(max.max1==max.max2){
        printf("?");
        return 0;
    }
    printf("%c",max.idx+'A');
}