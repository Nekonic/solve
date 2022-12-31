#include <iostream>
using namespace std;
bool isPrime(long long n){
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (long long i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, m;
    cin >> n;
    while (n--){
        cin >> m;
        while (1){
            if(isPrime(m)){
                cout << m << '\n';
                break;
            }m++;
        }
    }
}