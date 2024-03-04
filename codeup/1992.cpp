#include <iostream>
using namespace std;
int main(){
    unsigned int n,m;
    cin >> n >> m;
    while(m!=0){
        int x=n^m;
        int t=n&m;
        t<<=1;
        n=x;
        m=t;
    }cout << n;
}