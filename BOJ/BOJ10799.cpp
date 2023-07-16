#include <bits/stdc++.h>
using namespace std;
string s;
int ans;
stack<char> a;
int main(){
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(')a.push(s[i]);
        else if(s[i-1]=='('){
            a.pop();
            ans+=a.size();
        }else{
            a.pop();
            ans++;
        }
    }cout << ans;
}