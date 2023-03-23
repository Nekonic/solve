#include <iostream>
using namespace std;
int main(){
    int n=0;
    char c='0';
    string s;
    cin >> s;
    while (!s.empty()){
        if(s.back()==c)n+=5;
        else{
            n+=10;
            c=s.back();
        }
        s.pop_back();
    }cout << n;
}