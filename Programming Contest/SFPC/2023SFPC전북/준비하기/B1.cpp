#include <bits/stdc++.h>
using namespace std;
unsigned long long n,x;
int main(){
    cin >> n;
    if(n%5){
        n/=5;
        x=n*150000;
        n++;
    }else n/=5;
    cout << n << ' ' << x;
}