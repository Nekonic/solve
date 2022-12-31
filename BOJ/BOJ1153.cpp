#include <stdio.h>
void Eratos(bool arr[], int n){
    arr[0] = true;
    arr[1] = true;

    for (int i = 2; i * i < n; i++){
        if (arr[i] == true)
            continue;
        for (int j = i * i; j < n; j += i)
        {
            arr[j] = true;
        }
    }
}
int main(){
    int n,fn;
    scanf("%d", &n);fn=n;
    if (n < 8)
    {
        printf("-1");
        return 0;
    }
    if (n % 2 == 0)
    {
        printf("2 2 ");
        n -= 4;
    }
    else
    {
        printf("2 3 ");
        n -= 5;
    }
    bool *arr = new bool[1000000];
    bool hasAns = false;
    Eratos(arr, n);
    for (int i = fn%2+2; i < n; i++)
    {
        if (!arr[i] && !arr[n - i])
        {
            hasAns = true;
            printf("%d %d\n",i, n - i);
            break;
        }
    }
    return 0;
}