#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i=n; i>0; i--){
        for(int j=0; j<i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}