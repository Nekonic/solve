#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int x;
    for(int i=1; i<=5000000; i++){
        cin >> x;
        if(i%50==0)cout << x << " ";
    }
}