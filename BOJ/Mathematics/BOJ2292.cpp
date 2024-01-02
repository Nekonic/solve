#include <iostream>
using namespace std;
int main(){
    int n,sum=2,cnt=0;
    cin >> n;
    while (sum<=n){
        cnt++;
        sum+=6*cnt;
    }
    cout << cnt+1;
}