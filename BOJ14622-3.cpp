#include <stdio.h>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
using namespace std;
set<int> s;
int NumberArray[2237] = {};
void eratos(){
    for (int i = 2; i<=sqrt(5000000); i++)
    {
        if (NumberArray[i]) continue;
        for (int j = i * i; j <= 2237; j += i)
        {
            NumberArray[j] = 1;
        }
    }
    for (int i = 2; i <= 2237; i++)
    {
        if (!NumberArray[i])s.insert(i);
    }
}
int main()
{
    eratos();
    set<int, greater<int>> abprime,aprime,bprime;
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
            pnb++;
            if(pna <= 2)cnt-=1000;
            else {
                itera = aprime.begin();itera++;itera++;
                cnt-=*itera;
            }
            continue;
        }
        else if (iter2 == s.end() || b[i] < 2)
        {
            abprime.insert(a[i]);aprime.insert(a[i]);
            pna++;
            if(pnb <= 2)cnt+=1000;
            else {
                iterb = bprime.begin();iterb++;iterb++;
                cnt+=*iterb;
            }
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
                cnt -= 1000;
            }
            else if (iter2 != abprime.end())
            {
                cnt += 1000;
            }
        }
        abprime.insert(a[i]);aprime.insert(a[i]);
        abprime.insert(b[i]);bprime.insert(b[i]);
    }
    printf(cnt > 0 ? "소수의 신 갓대웅" : (cnt == 0 ? "우열을 가릴 수 없음" : "소수 마스터 갓규성"));
}