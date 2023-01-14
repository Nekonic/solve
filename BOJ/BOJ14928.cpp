#include <iostream>
#include <string>
using namespace std;
const long m=20000303;
int main(){
    string a,b="";
    cin >> a;
    unsigned long long n=0;
    for(int i=0; i<a.size(); i++){
        n=((n*10)%m+a[i]-'0')%m;
    }
    cout << n%m;
}