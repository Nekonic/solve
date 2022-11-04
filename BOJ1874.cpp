#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,x=1;
    vector<char> b;
    stack<int> a;
    cin >> n;
    queue<int> s;
    for(int i=0; i<n; i++){
        cin >> m;
        s.push(m);
    }
    while (!s.empty()){
        if(a.empty()||x<=s.front()){
            for(;x<=s.front();x++){
                a.push(x);
                b.push_back('+');
            }
        }else if(s.front()==a.top()){
            a.pop();
            s.pop();
            b.push_back('-');
        }else{
            cout << "NO";
            return 0;
        }
    }
    for(auto x: b)cout << x << "\n";
}