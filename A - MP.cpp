#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n>=229)cout << 4;
    else if(n>=218)cout << 3;
    else if(n>=206)cout << 2;
    else cout << 1;
}