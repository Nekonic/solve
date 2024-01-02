#include <bits/stdc++.h>
using namespace std;
int d[10000001];
int main(){
    int n;
    cin >> n;
    d[2]=2;
    d[3]=3;
    for(int i=4; i<=n; i++)d[i]=(d[i-1]+d[i-2])%10;
    cout << d[n];
}