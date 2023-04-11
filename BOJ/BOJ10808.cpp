#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int a[26]={};
    for(int i=0; i<s.size(); i++){
        a[s[i]-97]++;
    }for(auto i : a)cout << i << ' ';
}