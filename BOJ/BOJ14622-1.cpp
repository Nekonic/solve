#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
using namespace std;
const int INF = 5000005;
int NumberArray[5000000] = {};
bool compare(const int a, const int b)
{
    return a > b;
}
int f(int a[], int i)
{
    sort(a, a + i, compare);
    int x = 0;
    for (int k = 0; k < i; k++)
    {
        if (a[k] != INF)
            x++;
        if (x == 2)
        {
            return a[k];
        }
    }
    return 0;
}
int main()
{
    set<int> s;
    set<int> abprime;
    for (int i = 2; i <= sqrt(100000); i++)
    {
        if (NumberArray[i])
            continue;
        for (int j = i * i; j <= 100000; j += i)
        {
            NumberArray[j] = 1;
        }
    }
    for (int i = 2; i <= 100000; i++)
    {
        if (!NumberArray[i])
        {
            s.insert(i);
        }
    }
    int n, cnt = 0, pna = 0, pnb = 0;
    scanf("%d", &n);
    int a[n] = {}, b[n] = {};
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &a[i], &b[i]);
        set<int>::iterator iter1 = s.find(a[i]);
        set<int>::iterator iter2 = s.find(b[i]);
        //규칙 2
        if (iter1 == s.end() && b[i] < 2 || iter2 == s.end() && a[i] < 2)
            continue;
        else if (iter1 == s.end() || a[i] < 2)
        {
            abprime.insert(b[i]);
            pnb++;
            pna < 2 ? cnt -= 1000 : cnt -= f(a, i);
            continue;
        }
        else if (iter2 == s.end() || b[i] < 2)
        {
            abprime.insert(a[i]);
            pna++;
            pnb < 2 ? cnt += 1000 : cnt += f(b, i);
            continue;
        }
        //규칙 3
        else
        {
            iter1=abprime.find(a[i]);
            iter2=abprime.find(b[i]);
            if (i!=0 && abprime.find(a[i]) != abprime.end() && abprime.find(b[i]) != abprime.end());
            else if (iter1 != abprime.end())
            {
                a[i] = INF;
                cnt -= 1000;
            }
            else if (iter2 != abprime.end())
            {
                b[i] = INF;
                cnt += 1000;
            }
        }
        abprime.insert(a[i]);
        abprime.insert(b[i]);
    }
    printf(cnt > 0 ? "소수의 신 갓대웅" : (cnt == 0 ? "우열을 가릴 수 없음" : "소수 마스터 갓규성"));
}