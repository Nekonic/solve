#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    unsigned long long n,m=0,a,b,c;
    cin >> n >> a >> b >> c;
    m=n/12;
    n=m*a;
    m=n/8;
    n=m*b;
    m=n/5;
    n=m*c;
    cout<<n;
}