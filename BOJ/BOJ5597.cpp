#include <iostream>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a[31]={}, n;
    for(int i=0; i<28; i++){
        cin >> n; a[n]++;
    }
    for(int i=1; i<31; i++){
        if(a[i]==0)cout << i << " ";
    }
}