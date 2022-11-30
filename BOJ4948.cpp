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
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    while (n!=0){
        int cnt=0;
        for(int i=n+1; i<=2*n; i++){
            if(isPrime(i))cnt++;
        }cout << cnt << '\n';
        cin >> n;
    }
}