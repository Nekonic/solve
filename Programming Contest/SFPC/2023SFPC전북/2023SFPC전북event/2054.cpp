#include <bits/stdc++.h>
using namespace std;
int n;
string s,a,b;
void solve(int cnt){
    a=b=s;
    sort(a.begin(),a.end(),greater());
    sort(b.begin(),b.end());
    n=stoi(a)-stoi(b);
    s=to_string(n);
    if(cnt>10){
        cout << -1;
        return;
    }if(s=="6174"){
        cout << cnt;
        return;
    }else solve(cnt+1);
}
int main(){
    cin >> s;
    if(s=="6174"){
        cout << 0;
        return 0;
    }solve(1);
}