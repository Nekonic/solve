#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,a=300,b=60,c=10,sum=0,x=0;
    cin >> t;
    if(t%c!=0){
        cout << -1;
        return 0;
    }
    cout << (int)t/a << ' ';t%=a;
    cout << (int)t/b << ' ';t%=b;
    cout << (int)t/c;
}