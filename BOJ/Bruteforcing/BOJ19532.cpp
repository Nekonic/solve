#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[6];
    for(int i=0; i<6; i++)cin >> a[i];
    for(int i=-999; i<=999; i++){
        for(int j=-999; j<=999; j++){
            if(a[0]*i+a[1]*j==a[2]&a[3]*i+a[4]*j==a[5])cout<<i<<' '<<j;
        }
    }
}