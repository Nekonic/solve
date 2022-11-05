#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x=0;
    cin >> n;
    if(n%5==0){
        cout << n/5;
        return 0;
    }while (n>=0){
        if(n%5==0){
            cout << x+n/5;
            return 0;
        }
        n-=3;
        x++;
    }cout << -1;
}