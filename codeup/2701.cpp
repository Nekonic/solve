#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,minx=500;
    cin >> n;
    for(int i=0; i<5; i++){
        cin >> a;
        minx=min(minx,abs(n-a));
    }cout << minx;
}