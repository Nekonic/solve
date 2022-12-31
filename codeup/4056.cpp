#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m;
    cin >> m;
    if(m<=500)m*=0.7;
    else if(m<=1500)m=350+(m-500)*0.4;
    else if(m<=4500)m=750+(m-1500)*0.15;
    else if(m<=10000)m=1200+(m-4500)*0.05;
    else m=1475+(m-10000)*0.02;
    cout << m;
}