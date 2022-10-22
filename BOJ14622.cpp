#include <stdio.h>
#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
using namespace std;
int NumberArray[100001] = {};
int main()
{
    set<int> s;
    set<int, greater<int>> abprime,aprime,bprime;
    for (int i = 2; i * i <= 100000; i++)
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
        set<int>::iterator itera = aprime.begin();
        set<int>::iterator iterb = bprime.begin();
        //규칙 2
        if (iter1 == s.end() && b[i] < 2 || iter2 == s.end() && a[i] < 2)continue;
        else if (iter1 == s.end() || a[i] < 2)
        {
            if(iter2 != s.end() && b[i] < 2){
                abprime.insert(b[i]);bprime.insert(b[i]);
            }
            printf("a [index:%d][%d]cnt[%d]\n", i, a[i], cnt);
            pnb++;
            if(pna <= 2)cnt-=1000;
            else {
                itera = aprime.begin();itera++;itera++;
                cnt-=*itera;
            }
            printf("cnt = %d\n", cnt);
            continue;
        }
        else if (iter2 == s.end() || b[i] < 2)
        {
            abprime.insert(a[i]);aprime.insert(a[i]);
            printf("b [index:%d][%d]cnt[%d]\n", i, b[i], cnt);
            pna++;
            if(pnb <= 2)cnt+=1000;
            else {
                iterb = bprime.begin();iterb++;iterb++;
                cnt+=*iterb;
            }
            printf("cnt = %d\n", cnt);
            continue;
        }
        //규칙 3
        else
        {
            iter1=abprime.find(a[i]);
            iter2=abprime.find(b[i]);
            printf("\ni [%d] search[%d][%d]\n", i, *iter1, *iter2);
            if (i!=0 && abprime.find(a[i]) != abprime.end() && abprime.find(b[i]) != abprime.end());
            else if (iter1 != abprime.end())
            {
                printf("a에서 말했던소수가 발견됨 [%d %d]", a[i], i);
                cnt -= 1000;
                printf("cnt = %d\n", cnt);
            }
            else if (iter2 != abprime.end())
            {
                printf("b에서 말했던소수가 발견됨 [%d %d]", a[i], i);
                cnt += 1000;
                printf("cnt = %d\n", cnt);
            }
        }
        abprime.insert(a[i]);aprime.insert(a[i]);
        abprime.insert(b[i]);bprime.insert(b[i]);
    }
    printf(cnt > 0 ? "소수의 신 갓대웅" : (cnt == 0 ? "우열을 가릴 수 없음" : "소수 마스터 갓규성"));
    printf("\n[%d]\n", cnt);
    for (auto i : abprime) cout << i << " ";
    set<int>::iterator iterabs = abprime.begin();iterabs++;iterabs++;
    printf("\n%d",*iterabs);
}