#include <iostream>
#include <stack>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    stack<char> a;
    if(s[0]==')'){
        cout << "bad";
        return 0;
    }
    for(int i=0; i<s.length(); i++){
        if(s[i]=='(')a.push('(');
        else if(!a.empty()){
            a.pop();
        }
        else {
            cout << "bad";
            return 0;
        }
    }
    if(a.empty())cout << "good";
    else cout << "bad";
}