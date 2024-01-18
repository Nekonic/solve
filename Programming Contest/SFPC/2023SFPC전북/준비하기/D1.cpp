#include <bits/stdc++.h>
using namespace std;
unsigned long long a,b,c,x;
int main(){
    cin >> a >> b >> c;
    a/=40;
    b/=50;
    c/=30;
    x=min(a,min(b,c));
    cout << x;
}