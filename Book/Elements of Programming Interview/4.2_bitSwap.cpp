#include <bits/stdc++.h>
using namespace std;
long long SwapBits(long long x, int i, int j){
    if((x>>i&1)!=(x>>j)&1){
        unsigned long long bit_mask = (1LL<<i)|(1LL<<j);
        x^=bit_mask;
    }return x;
}
int main(){
    int n,i,j;
    cin >> n >> i >> j;
    cout << SwapBits(n,i,j);
}