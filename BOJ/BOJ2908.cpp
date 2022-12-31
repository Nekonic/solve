#include <iostream>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char a;
    int x=0,y=0;
    for(int i=1; i<=100; i*=10){
        cin >> a;
        x+=(a-'0')*i;
    }
    for(int i=1; i<=100; i*=10){
        cin >> a;
        y+=(a-'0')*i;
    }
    if(x>y)cout << x;
    else cout << y;
}