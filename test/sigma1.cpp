#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=2,sum=0;
    for(int i=1; i<=6; i++){
        sum+=pow(n,3);
        n+=3;
    }cout << sum;
}