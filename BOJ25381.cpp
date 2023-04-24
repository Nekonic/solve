#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    int cnt=0,a=0,b=0,c=0;
    for(auto x : s){
        if(x=='A')a++;
        if(x=='B'&&a){
            a--;
            cnt++;
        }
    }for(int i=s.size()-1; i>=0; i--){
        if(s[i]=='C')c++;
        if(s[i]=='B'&&c){
            c--;
            cnt++;
        }
    }for(auto x : s)if(x=='B')b++;
    cout << min(cnt,b);
}