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
    int n,m,minp=10001,sum=0;
    cin >> n >> m;
    for(int i=n; i<=m; i++){
        if(isPrime(i)){
            if(minp>i)minp=i;
            sum+=i;
        }
    }if(minp==10001)cout << -1;
    else cout << sum << '\n' << minp;
}