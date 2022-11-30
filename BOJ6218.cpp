#include <iostream>
#include <set>
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
    int a,b,d,cnt=0;
    cin >> a >> b >> d;
    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            string s=to_string(i);
            for(int j=0; j<s.length(); j++){
                if(d+'0'==s[j]){
                    cnt++;
                    break;
                }
            }
        }
    }cout << cnt;
}