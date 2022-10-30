#include <iostream>
using namespace std;
int main(){
    int a,s=0,t=0;
    for(int i=0; i<4; i++){
        cin >> a;
        s+=a;
    }
    for(int i=0; i<4; i++){
        cin >> a;
        t+=a;
    }
    s = s>t?s:t;
    cout << s;
}