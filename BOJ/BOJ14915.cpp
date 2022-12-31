#include <iostream>
#include <deque>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,x;
    deque<char> str;
    cin >> n >> m;
    if(!n){
        cout << 0;
        return 0;
    }
    while (n){
        x=n%m>9?7:0;
        str.push_front(n%m+'0'+x);
        n/=m;
    }for(auto i : str)cout << i;
}