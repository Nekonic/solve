#include <iostream>
using namespace std;
int main(){
    unsigned long long t,n,m;
    cin >> t;
    while (t--){
        cin >> n;m=n;
        for(int i=1; i<m; i++){
            n*=i;
            n%=1000000;
            while(n%10==0)n/=10;
        }
        cout << n%10 << '\n';
    }
}