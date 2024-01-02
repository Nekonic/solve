#include <stdio.h>
int fc(int n){
    if(n==0)return 1;
    return n*fc(n-1);
}
double e(int n){
    if(n==0)return 1;
    return 1/(double)fc(n)+e(n-1);
}
int main(){printf("n e\n- -----------\n0 1\n1 2\n2 2.5\n");
    for(int i=3; i<10; i++){
        printf("%d %.9lf\n",i,e(i));
    }
}