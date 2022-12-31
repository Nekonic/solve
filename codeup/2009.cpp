#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,sum=0;
    cin >> k >> n;
    for(int i=k; i-n>=0; i-=n){
        i++;
        sum++;
    }
    cout << sum;
}