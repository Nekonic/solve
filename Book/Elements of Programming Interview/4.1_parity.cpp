#include <bits/stdc++.h>
using namespace std;
short parity(unsigned long long x){
    x^=x>>32;
    x^=x>>16;
    x^=x>>8;
    x^=x>>4;
    x^=x>>2;
    x^=x>>1;
    return x&1;
}
int main(){
    unsigned long long n;
    cin >> n;
    short ans = parity(n);
    cout << ans;
}