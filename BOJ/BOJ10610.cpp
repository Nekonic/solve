#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    int sum=0;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        sum+=s[i];
    }sort(s.begin(),s.end(),greater<>());
    if(sum%3!=0||s.back()!='0'){
        cout << -1;
        return 0;
    }
    cout << s;
}