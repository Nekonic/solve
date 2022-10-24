#include <iostream>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char x;
    int a,b,n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> x >> b;
        cout << a+b << "\n";
    }
}