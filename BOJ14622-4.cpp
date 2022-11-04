#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<int, greater<int>> abprime,aprime,bprime;
    int n, cnt = 0, pna = 0, pnb = 0;
    cin >> n;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        set<int>::iterator itera = aprime.begin();
        set<int>::iterator iterb = bprime.begin();
        //규칙 2
        if (!isPrime(a) && b < 2 || !isPrime(b) && a < 2)continue;
        else if (!isPrime(a) || a < 2)
        {
            if(isPrime(b) && b < 2){
                abprime.insert(b);bprime.insert(b);
            }
            pnb++;
            if(pna <= 2)cnt-=1000;
            else {
                itera = aprime.begin();itera++;itera++;
                cnt-=*itera;
            }
            continue;
        }
        else if (!isPrime(b) || b < 2)
        {
            abprime.insert(a);aprime.insert(a);
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
            if (i!=0 && abprime.find(a) != abprime.end() && abprime.find(b) != abprime.end());
            else if (abprime.find(a) != abprime.end())
            {
                cnt -= 1000;
            }
            else if (abprime.find(b) != abprime.end())
            {
                cnt += 1000;
            }
        }
        abprime.insert(a);aprime.insert(a);
        abprime.insert(b);bprime.insert(b);
    }
    cout << (cnt > 0 ? "소수의 신 갓대웅" : (cnt == 0 ? "우열을 가릴 수 없음" : "소수 마스터 갓규성"));
}