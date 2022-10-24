#include <iostream>
#include <deque>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    deque<int> x;
    string str[8]={"push_front", "push_back", "pop_front", "pop_back", "size", "empty", "front", "back"};
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        for(int j=0; j<8; j++){
            if(s.compare(str[j])==0){
                if(j<1){
                    cin >> n;
                    if(j==0)x.push_front(n);
                    else x.push_back(n);
                }
                else if(j<4){
                    if(j==3){
                        if(x.size()==0)cout << "-1\n";
                        x.pop_front();
                    }
                    else x.pop_back();
                }
                else if(j==4)cout << x.size();
                else if(j==5)cout << x.empty();
                else if(j==6)cout << x.front();
                else if(j==7)cout << x.back();
            }
        }
    }
}