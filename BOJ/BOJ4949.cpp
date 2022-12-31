#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
    string s;
    while (1){
        getline(cin,s);
        stack<char> a;
        if(s.front()=='.')return 0;
        bool no=false;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(')a.push('(');
            else if(s[i]==')'){
                if(!a.empty()&&a.top()!='[')a.pop();
                else no=true;
            }
            if(s[i]=='[')a.push('[');
            else if(s[i]==']'){
                if(!a.empty()&&a.top()!='(')a.pop();
                else no=true;
            }
        }if(a.empty()&&!no)cout << "yes\n";
        else cout << "no\n";
    }
}