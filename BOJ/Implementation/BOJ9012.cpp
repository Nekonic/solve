#include <iostream>
#include <stack>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        stack<char> a;
        string str;
        cin >> str;
        bool x=true;
        for(int j=0; j<str.length(); j++){
            if(str[j]=='(')a.push('(');
            else if(str[0]==')'||a.empty()==1)x=false;
            else if(a.top()=='(')a.pop();
        }
        if(a.empty()!=0&&x)cout << "YES\n";
        else cout << "NO\n";
    }
}