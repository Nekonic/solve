#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cin >> str;
    for(int i=0; i<26; i++){
        bool x=false;
        for(int j=0; j<str.length(); j++){
            if('a'+i==str[j]){
                cout << j << " ";
                x=true;
                break;
            }
        }
        if(!x)cout << "-1 ";
    }
}