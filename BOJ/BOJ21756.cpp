#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1; i<30; i++){
        if(n<(1<<i)){
            cout << (1<<i-1);
            return 0;
        }
    }
}