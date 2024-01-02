#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        string D;
        int B,result=0;
        cin >> B >> D;B--;
        for(int j=0; j<D.length(); j++){
            result+=D[j]-'0';
        }cout << result%B << '\n';
    }
}