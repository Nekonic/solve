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
    unsigned long long n,cntm=2,m=1,i=2,t=1,check=1;
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    cin >> n;
    while(m<n){
        if(month[cntm]<i){
            i=1;
            cntm=(cntm+1)%12;
        }
        if(isPrime(i))t*=3;
        else t*=2;
        m+=t;
        i++;
        check++;
    }cout << check;
}