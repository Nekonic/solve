#include <iostream>
#include <stack>
using namespace std;
int main(){
    int n,m;
    cin >> n;
    stack<int> a;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(s.compare("push")==0){
            cin >> m;
            a.push(m);
        }
        else if(s.compare("pop")==0){
            if(!a.empty()){
                cout << a.top() << "\n";
                a.pop();
            }
            else cout << "-1\n";
        }
        else if(s.compare("size")==0){
            cout << a.size() << "\n";
        }
        else if(s.compare("empty")==0){
            cout << a.empty() << "\n";
        }
        else if(s.compare("top")==0){
            if(!a.empty())cout << a.top() << "\n";
            else cout << "-1\n";
        }
    }
}