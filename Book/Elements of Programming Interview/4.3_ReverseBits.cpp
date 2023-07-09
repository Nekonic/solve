#include <bits/stdc++.h>
using namespace std;
unsigned int ReverseBits(unsigned int x){
    unsigned int res=0;
    for(int i=31; i>=0; i--){
        res+=(x&1)<<i;
        x=x>>1;
    }return res;
}
int main(){
    unsigned int n;
    cin >> n;
    cout << ReverseBits(n);
}