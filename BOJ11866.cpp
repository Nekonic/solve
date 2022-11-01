#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n, k, cnt = 1, rj = 0;
    cin >> n >> k;
    cout << "<";
    queue<int> j;
    for (int i = 1; i <= n; i++)
        j.push(i);
    while (rj != n)
    {
        while (true)
        {
            if (cnt++ % k == 0)
            {
                cout << j.front();
                j.pop();
                rj++;
                break;
            }
            else
            {
                j.push(j.front());
                j.pop();
            }
        }
        if (rj != n)
            cout << ", ";
    }
    cout << ">";
}