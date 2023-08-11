#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a[45]={1,2,3};
    for(int i=3; i<41; i++){
        a[i]=a[i-1]+a[i-2];
    }
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> m;
        cout << "Scenario "<< i << ":\n" << a[m] << "\n\n";
    }
}