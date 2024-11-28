#include <bits/stdc++.h>
using namespace std;
long long rec(long long a,long long b,long long c){
    if(b==1)return a%c;
    if(b%2==0)return rec((a*a)%c,b/2,c);
    else return (rec(a%c,b-1,c)*a)%c;
}
int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    cout << rec(a,b,c);
}