#include <iostream>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    string x="long";
    cin >> a;
    for(int i=1; i<a; i+=4){
        cout << x << " ";
    }
    cout << "int";
}