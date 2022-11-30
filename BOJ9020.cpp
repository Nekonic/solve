#include <iostream>
using namespace std;
bool isPrime(int n){
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    cin >> t;
    while (t--){
        cin >> n;
        for(int i=n/2; i>=2; i--){
            if(isPrime(i)&&isPrime(n-i)){
                cout << i << ' ' << n-i << '\n';
                break;
            }
        }
    }
}