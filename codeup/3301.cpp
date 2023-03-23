#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin >> n;
    while(n>=50000){
        n-=50000;
        sum++;
    }while(n>=10000){
        n-=10000;
        sum++;
    }while(n>=5000){
        n-=5000;
        sum++;
    }while(n>=1000){
        n-=1000;
        sum++;
    }while(n>=500){
        n-=500;
        sum++;
    }while(n>=100){
        n-=100;
        sum++;
    }while(n>=50){
        n-=50;
        sum++;
    }while(n>=10){
        n-=10;
        sum++;
    }cout << sum;
}