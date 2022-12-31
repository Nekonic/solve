#include <iostream>
using namespace std;
int main()
{
    string a;
    while (true)
    {
        cin >> a;
        if (a == "0")
        {
            break;
        }
        int no = 0;
        for (int i = 0; i < a.length() / 2; i++)
        {
            if (a[i] != a[a.length() - i - 1])
            {
                no++;
                break;
            }
        }
        if (no == 0)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}