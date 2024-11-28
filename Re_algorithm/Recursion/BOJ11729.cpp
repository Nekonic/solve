#include <bits/stdc++.h>
using namespace std;
void rec(int n,int p,int t){
    if(n==1){
        cout << p << ' ' << t << '\n';
        return;
    }
    rec(n-1,p,6-p-t);
    cout << p << ' ' << t << '\n';
    rec(n-1,6-p-t,t);
}
int main(){
    int n;
    cin >> n;
    cout << (1<<n)-1 << '\n';
    rec(n,1,3);
}