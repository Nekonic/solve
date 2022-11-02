#include <iostream>
#include <queue>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n;
    queue<int> a;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(s.compare("push")==0){
            cin >> m;
            a.push(m);
        }
        else if(s.compare("pop")==0){
            if(!a.empty()){
                cout << a.front() << "\n";
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
        else if(s.compare("front")==0){
            if(!a.empty())cout << a.front() << "\n";
            else cout << "-1\n";
        }
        else{
            if(!a.empty())cout << a.back() << "\n";
            else cout << "-1\n";
        }
    }
}