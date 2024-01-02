#include <bits/stdc++.h>
using namespace std;
int cnt;
int main(){
    string s;
    set<string> str;
    cin >> s;
    for(int i=1; i<s.size(); i++){
        for(int j=0; j<s.size()-i+1; j++){
            auto it = str.insert(s.substr(j,i));
            if(it.second)cnt++;
        }
    }cout << cnt+1;
}