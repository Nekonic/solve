#include <stdio.h>
#include <string.h>
char a[1000001];
int main()
{
    int x = 0;
    scanf("%[^\n]s", a);
    if (a[0] != ' ')
        x++;
    for (int i = 1; i < strlen(a); i++)
    {
        if (a[i - 1] == ' ' && a[i] != ' ')
        {
            x++;
        }
    }
    printf("%d", x);
}