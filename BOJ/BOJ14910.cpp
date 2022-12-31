#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n;m=n;
    while (cin >> n)
    {
        if(n<m){
            cout << "Bad";
            return 0;
        }
        m=n;
    }cout << "Good";
}