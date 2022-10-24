#include <iostream>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a;
    while (!cin.eof())
    {
        getline(cin, a);
        cout << a << "\n";
    }
}