#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int bit=0; bit<(1<<n); bit++){
        for(int i=n-1; i>=0; i--){
            if(bit&(1<<i))cout << 'X';
            else cout << 'O';
        }
        cout << '\n';
    }
}