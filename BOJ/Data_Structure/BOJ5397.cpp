#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        list<char> s;
        auto it = s.begin();
        string str;
        cin >> str;
        for(int i=0; i<str.size(); i++){
            if(str[i]!='<'&&str[i]!='>'&&str[i]!='-')s.insert(it,str[i]);
            else if(str[i]=='<'&&it!=s.begin())it--;
            else if(str[i]=='>'&&it!=s.end())it++;
            else if(str[i]=='-'&&it!=s.begin())it=s.erase(--it);
        }for(auto i : s)cout << i;
        cout << '\n';
    }
}