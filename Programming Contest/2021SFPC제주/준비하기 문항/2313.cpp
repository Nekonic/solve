#include <iostream>
using namespace std;
int main(){
    int n,cnt=0;
    cin >> n;
    while(n>=10){
        n-=10;
        cnt++;
    }while(n>=5){
        n-=5;
        cnt++;
    }while(n>=3){
        n-=3;
        cnt++;
    }while(n>=1){
        n-=1;
        cnt++;
    }cout << cnt;
}