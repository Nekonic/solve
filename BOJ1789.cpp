#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
    unsigned long long int s;
    cin >> s;
    unsigned long long int n = sqrt(s*2);
    n = s<n*(n+1)/2?n-1:n;
    cout << n;
}