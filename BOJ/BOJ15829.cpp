#include <iostream>
#include <cmath>
#define M 1234567891
using namespace std;
int main(){
    long long n, sum=0,r=1;
    char a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        a = a-96;
        sum=(sum+a*r)%M;
        r = (r*31)%M;
    }
    cout << sum;
}