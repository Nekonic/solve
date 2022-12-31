#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x,min1=1000,max1=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        min1=min(min1, x);
        max1=max(max1, x);
    }
    cout << max1-min1;
}