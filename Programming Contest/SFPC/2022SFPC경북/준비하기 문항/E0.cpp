#include<bits/stdc++.h>
using namespace std;
int n,m,cnt;
int main(){
    cin >> n >> m;
    n -= m;
    cnt = n/500;
    n %= 500;
    cnt += n/100;
    n %= 100;
    cnt += n/50;
    n %= 50;
    cnt += n/10;
    cout << cnt;
}