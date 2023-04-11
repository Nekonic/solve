#include <bits/stdc++.h>
using namespace std;
int main(){
    list<char> ls;
    string s;
    char q,c;
    cin >> s;
    for(int i=0; i<s.size(); i++)ls.push_back(s[i]);
    int n;
    auto it = ls.end();
    cin >> n;
    while(n--){
        cin >> q;
        if(q=='P'){
            cin >> c;
            ls.insert(it,c);
        }if(q=='L'&&it!=ls.begin())it--;
        if(q=='D'&&it!=ls.end())it++;
        if(q=='B'&&it!=ls.begin()){
            it = ls.erase(--it);
        }
    }for(auto i : ls)cout << i;
}