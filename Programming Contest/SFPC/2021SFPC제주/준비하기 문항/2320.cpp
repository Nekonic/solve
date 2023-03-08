#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,r,c,d,x,y;
    cin >> a >> b >> r >> c >> d;
    x=abs(a-c);y=abs(b-d);
    if(sqrt(x*x+y*y)>r)cout << "out";
    else if(sqrt(x*x+y*y)==r)cout << "on";
    else cout << "in";
}