#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << n/25 << ' ';n%=25;
        cout << n/10 << ' ';n%=10;
        cout << n/5 << ' ';n%=5;
        cout << n << '\n';
    }
}