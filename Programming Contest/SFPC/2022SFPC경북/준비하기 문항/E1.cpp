#include<stdio.h>
int main(){
    int n, m, cnt = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    n -= m;
    cnt = n/500;
    n %= 500;
    cnt += n/100;
    n %= 100;
    cnt += n/50;
    n %= 50;
    cnt += n/10;

    printf("%d",cnt);
}
