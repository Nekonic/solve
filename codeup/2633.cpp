#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,x;
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        cin >> x;
        if(x>=k){
            cout << i;
            return 0;
        }
    }
    cout << n+1;
}