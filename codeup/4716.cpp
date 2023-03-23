#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,arr[11]={};
    for(int i=1; i<11; i++){
        cin >> a >> b;
        arr[i]=arr[i-1]+b-a;
    }sort(arr,arr+11);
    cout << arr[10];
}