#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    string s;
    stack<char> st;
    cin >> s;
    for(char c:s){
        if(c>='A'&&c<='Z')cout << c;
        else{
            if(c=='(')st.push(c);
            else if(c=='/'||c=='*'){
                while(!st.empty()&&(st.top()=='*'||st.top()=='/')){
                    cout << st.top();st.pop();
                }st.push(c);
            }else{
                while(!st.empty()&&st.top()!='('){
                    cout << st.top();st.pop();
                }if(c==')')st.pop();
                else st.push(c);
            }
        }
    }while(!st.empty()){
        cout << st.top();st.pop();
    }
}