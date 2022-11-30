#include <iostream>
#include <string>
#include <algorithm>
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
    int n;
    cin >> n;
    while (1){
        if(isPrime(n)){
            int cnt=0;
            string str1=to_string(n);
            reverse(str1.begin(),str1.end());
            if(str1==to_string(n)){
                cout << n;
                return 0;
            }
        }n++;
    }
}