#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int h=0,s=0;
    getline(cin,str);
    for(int i=0; i<str.size(); i++){
        if(str[i]==':'&&str[i+1]=='-'){
            if(str[i+2]==')')h++;
            if(str[i+2]=='(')s++;
        }
    }if(h==0&&s==0)cout << "none";
    else if(h==s)cout << "unsure";
    else if(h>s)cout << "happy";
    else cout << "sad";
}