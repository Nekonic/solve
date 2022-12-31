#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char s;
    while (true)
    {
        cin >> s;
        if(cin.eof())break;
        if(s<97)s+=32;
        else s-=32;
        cout << s;
    }
}