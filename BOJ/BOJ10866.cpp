#include <iostream>
#include <deque>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n;
    deque<int> a;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(s.compare("push_front")==0){
            cin >> m;
            a.push_front(m);
        }
        else if(s.compare("push_back")==0){
            cin >> m;
            a.push_back(m);
        }
        else if(s.compare("pop_back")==0){
            if(!a.empty()){
                cout << a.back() << "\n";
                a.pop_back();
            }
            else cout << "-1\n";
        }
        else if(s.compare("pop_front")==0){
            if(!a.empty()){
                cout << a.front() << "\n";
                a.pop_front();
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