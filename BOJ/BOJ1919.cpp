#include <bits/stdc++.h>
using namespace std;
string a,b;
int n[26],m[26],res;
int main(){
    cin >> a >> b;
    for(int i=0; i<a.size(); i++)n[a[i]-'a']++;
    for(int i=0; i<b.size(); i++)m[b[i]-'a']++;
    for(int i=0; i<26; i++)res+=abs(m[i]-n[i]);
    cout << res;
}