#include <iostream>
using namespace std;
int main(){
    string a;
    char t;
    cin >> a;
    for(int i=0; i<a.size(); i+=2){
        cout << a[i+1] << a[i];
    }
}