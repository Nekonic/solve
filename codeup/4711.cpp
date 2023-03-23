#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,arr[5]={};
    for(int i=1; i<5; i++){
        cin >> a >> b;
        arr[i]=arr[i-1]+b-a;
    }sort(arr,arr+5);
    cout << arr[4];
}