#include <bits/stdc++.h>
using namespace std;
void rec(int a,int b,int n){
    if(n==0)return;
    rec(a,6-a-b,n-1);
    cout << a << ' ' << b << '\n';
    rec(6-a-b,b,n-1);
}
int main(){
    int n;
    cin >> n;
    cout << (1<<n)-1 << '\n';
    rec(1,3,n);
}